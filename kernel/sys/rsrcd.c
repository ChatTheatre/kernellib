# include <kernel/kernel.h>
# include <kernel/rsrc.h>
# include <type.h>

# define CO_OBJ		0	/* callout object */
# define CO_OWNER	1	/* owner */
# define CO_HANDLE	2	/* handle in object */
# define CO_RELHANDLE	3	/* release handle */
# define CO_PREV	4	/* previous callout */
# define CO_NEXT	5	/* next callout */


mapping resources;		/* registered resources */
mapping owners;			/* resource owners */
int downtime;			/* shutdown time */
mapping suspended;		/* suspended callouts */
mixed *first_suspended;		/* first suspended callout */
mixed *last_suspended;		/* last suspended callout */
object suspender;		/* object that suspended callouts */
int suspend;			/* callouts suspended */

/*
 * NAME:	create()
 * DESCRIPTION:	initialize resource mappings
 */
static void create()
{
    /* initial resources */
    resources = ([
      "objects" :	({ -1,  0,    0 }),
      "events" :	({ -1,  0,    0 }),
      "callouts" :	({ -1,  0,    0 }),
      "stack" :		({ -1,  0,    0 }),
      "ticks" :		({ -1,  0,    0 }),
      "tick usage" :	({ -1, 10, 3600 }),
      "filequota" :	({ -1,  0,    0 }),
      "editors" :	({ -1,  0,    0 }),
      "create stack" :	({ -1,  0,    0 }),
      "create ticks" :	({ -1,  0,    0 }),
    ]);

    owners = ([ ]);		/* no resource owners yet */
}

/*
 * NAME:	add_owner()
 * DESCRIPTION:	add a new resource owner
 */
void add_owner(string owner)
{
    if (KERNEL() && !owners[owner]) {
	object obj;

	rlimits (-1; -1) {
	    obj = clone_object(RSRCOBJ);
	    catch {
		owners[owner] = obj;
		obj->set_owner(owner);
		owners["System"]->rsrc_incr("objects", nil, 1,
					    resources["objects"], TRUE);
	    } : {
		destruct_object(obj);
	    }
	}
	if (!obj) {
	    error("Too many resource owners");
	}
    }
}

/*
 * NAME:	remove_owner()
 * DESCRIPTION:	remove a resource owner
 */
void remove_owner(string owner)
{
    object obj;
    string *names;
    mixed **rsrcs, *rsrc;
    int i;

    if (previous_program() == API_RSRC && (obj=owners[owner])) {
	names = map_indices(resources);
	rsrcs = map_values(resources);
	for (i = sizeof(names); --i >= 0; ) {
	    rsrc = obj->rsrc_get(names[i], rsrcs[i]);
	    if (rsrc[RSRC_DECAY] == 0 && (int) rsrc[RSRC_USAGE] != 0) {
		error("Removing owner with non-zero resources");
	    }
	}

	destruct_object(obj);
    }
}

/*
 * NAME:	query_owners()
 * DESCRIPTION:	return a list of resource owners
 */
string *query_owners()
{
    if (previous_program() == API_RSRC) {
	return map_indices(owners);
    }
}


/*
 * NAME:	set_rsrc()
 * DESCRIPTION:	set the maximum, decay percentage and decay period of a
 *		resource
 */
void set_rsrc(string name, int max, int decay, int period)
{
    if (KERNEL()) {
	mixed *rsrc;

	rsrc = resources[name];
	if (rsrc) {
	    /*
	     * existing resource
	     */
	    if ((rsrc[GRSRC_DECAY] == 0) != (decay == 0)) {
		error("Cannot change resource decay");
	    }
	    rlimits (-1; -1) {
		rsrc[GRSRC_MAX] = max;
		rsrc[GRSRC_DECAY] = decay;
		rsrc[GRSRC_PERIOD] = period;
	    }
	} else {
	    /* new resource */
	    resources[name] = ({ max, decay, period });
	}
    }
}

/*
 * NAME:	remove_rsrc()
 * DESCRIPTION:	remove a resource
 */
void remove_rsrc(string name)
{
    int *rsrc, i;
    object *objects;

    if (previous_program() == API_RSRC && (rsrc=resources[name])) {
	objects = map_values(owners);
	i = sizeof(objects);
	rlimits (-1; -1) {
	    while (i != 0) {
		objects[--i]->remove_rsrc(name);
	    }
	    resources[name] = nil;
	}
    }
}

/*
 * NAME:	query_rsrc()
 * DESCRIPTION:	get usage and limits of a resource
 */
mixed *query_rsrc(string name)
{
    if (previous_program() == API_RSRC) {
	mixed *rsrc, usage;
	object *objects;
	int i;

	rsrc = resources[name][..];
	objects = map_values(owners);
	usage = (rsrc[GRSRC_DECAY] == 0) ? 0 : 0.0;
	for (i = sizeof(objects); --i >= 0; ) {
	    usage += objects[i]->rsrc_get(name, resources[name])[RSRC_USAGE];
	}

	return ({ usage, rsrc[GRSRC_MAX], 0 }) +
	       rsrc[GRSRC_DECAY .. GRSRC_PERIOD];
    }
}

/*
 * NAME:	query_resources()
 * DESCRIPTION:	return a list of resources
 */
string *query_resources()
{
    if (previous_program() == API_RSRC) {
	return map_indices(resources);
    }
}


/*
 * NAME:	rsrc_set_limit()
 * DESCRIPTION:	set individual resource limit
 */
void rsrc_set_limit(string owner, string name, int max)
{
    if (previous_program() == API_RSRC) {
	object obj;

	if (!(obj=owners[owner])) {
	    error("No such resource owner");
	}
	obj->rsrc_set_limit(name, max, resources[name][GRSRC_DECAY]);
    }
}

/*
 * NAME:	rsrc_get()
 * DESCRIPTION:	get individual resource usage
 */
mixed *rsrc_get(string owner, string name)
{
    if (KERNEL()) {
	object obj;

	if (!(obj=owners[owner])) {
	    error("No such resource owner");
	}
	return obj->rsrc_get(name, resources[name]);
    }
}

/*
 * NAME:	rsrc_incr()
 * DESCRIPTION:	increment or decrement a resource, returning TRUE if succeeded,
 *		FALSE if failed
 */
int rsrc_incr(string owner, string name, mixed index, int incr,
	      varargs int force)
{
    if (KERNEL()) {
	object obj;

	if (!(obj=owners[owner])) {
	    error("No such resource owner");
	}
	return obj->rsrc_incr(name, index, incr, resources[name], force);
    }
}

/*
 * NAME:	call_limits()
 * DESCRIPTION:	handle stack and tick limits for _F_call_limited
 */
mixed *call_limits(mixed *limits, string owner, int stack, int ticks)
{
    if (previous_program() == AUTO) {
	return owners[owner]->call_limits(limits, stack, ticks,
					  resources["stack"],
					  resources["ticks"],
					  resources["tick usage"]);
    }
}

/*
 * NAME:	update_ticks()
 * DESCRIPTION:	update ticks after execution
 */
int update_ticks(mixed *limits, int ticks)
{
    if (KERNEL()) {
	if (limits[LIM_MAXTICKS] > 0 &&
	    (!limits[LIM_NEXT] ||
	     limits[LIM_OWNER] != limits[LIM_NEXT][LIM_OWNER])) {
	    owners[limits[LIM_OWNER]]->update_ticks(ticks = limits[LIM_MAXTICKS]
								    - ticks);
	    ticks = (limits[LIM_TICKS] >= 0) ?
		     limits[LIM_NEXT][LIM_MAXTICKS] -= ticks : -1;
	}
	return ticks;
    }
}


/*
 * NAME:	suspend_callouts()
 * DESCRIPTION:	suspend all callouts
 */
void suspend_callouts()
{
    if (SYSTEM() && suspend >= 0) {
	mixed *callout;

	rlimits (-1; -1) {
	    if (suspend > 0) {
		callout = first_suspended;
		do {
		    if (callout[CO_RELHANDLE] != 0) {
			remove_call_out(callout[CO_RELHANDLE]);
			callout[CO_RELHANDLE] = 0;
		    }
		    callout = callout[CO_NEXT];
		} while (callout);
	    } else {
		suspended = ([ ]);
	    }
	    suspender = previous_object();
	    suspend = -1;
	}
    }
}

/*
 * NAME:	release_callouts()
 * DESCRIPTION:	release suspended callouts
 */
void release_callouts()
{
    if (SYSTEM() && suspend < 0) {
	rlimits (-1; -1) {
	    suspender = nil;
	    if (first_suspended) {
		mixed *callout;

		callout = first_suspended;
		do {
		    if (callout[CO_RELHANDLE] == 0) {
			callout[CO_RELHANDLE] = call_out("release", 0);
		    }
		    callout = callout[CO_NEXT];
		} while (callout);
		suspend = 1;
	    } else {
		suspended = nil;
		suspend = 0;
	    }
	}
    }
}


/*
 * NAME:	suspended()
 * DESCRIPTION:	return TRUE if callouts are suspended, otherwise return FALSE
 *		and decrease # of callouts by 1
 */
int suspended(object obj, string owner)
{
    if (previous_program() == AUTO) {
	if (suspend != 0 && obj != suspender) {
	    return TRUE;
	}
	owners[owner]->rsrc_incr("callouts", obj, -1, resources["callouts"],
				 FALSE);
	return FALSE;
    }
}

/*
 * NAME:	suspend()
 * DESCRIPTION:	suspend a callout
 */
void suspend(object obj, string owner, int handle)
{
    if (previous_program() == AUTO) {
	mixed *callout;

	callout = ({ obj, owner, handle, 0, last_suspended, nil });
	if (suspend > 0) {
	    callout[CO_RELHANDLE] = call_out("release", 0);
	}
	if (last_suspended) {
	    last_suspended[CO_NEXT] = callout;
	} else {
	    first_suspended = callout;
	}
	last_suspended = callout;
	if (suspended[obj]) {
	    suspended[obj][handle] = callout;
	} else {
	    suspended[obj] = ([ handle : callout ]);
	}
    }
}

/*
 * NAME:	remove_callout()
 * DESCRIPTION:	decrease amount of callouts, and possibly remove callout from
 *		list of suspended calls
 */
int remove_callout(object obj, string owner, int handle)
{
    if (previous_program() == AUTO && obj != this_object()) {
	mapping callouts;
	mixed *callout;

	owners[owner]->rsrc_incr("callouts", obj, -1, resources["callouts"],
				 FALSE);

	if (suspended && (callouts=suspended[obj]) &&
	    (callout=callouts[handle])) {
	    if (callout != first_suspended) {
		callout[CO_PREV][CO_NEXT] = callout[CO_NEXT];
	    } else {
		first_suspended = callout[CO_NEXT];
	    }
	    if (callout != last_suspended) {
		if (callout[CO_RELHANDLE] != 0) {
		    remove_call_out(last_suspended[CO_RELHANDLE]);
		    last_suspended[CO_RELHANDLE] = callout[CO_RELHANDLE];
		}
		callout[CO_NEXT][CO_PREV] = callout[CO_PREV];
	    } else {
		if (callout[CO_RELHANDLE] != 0) {
		    remove_call_out(callout[CO_RELHANDLE]);
		}
		last_suspended = callout[CO_PREV];
	    }
	    callouts[handle] = nil;
	    return TRUE;	/* delayed call */
	}
    }
    return FALSE;
}

/*
 * NAME:	remove_callouts()
 * DESCRIPTION:	remove callouts from an object about to be destructed
 */
void remove_callouts(object obj, string owner, int n)
{
    if (previous_program() == AUTO) {
	mixed **callouts, *callout;
	int i;

	owners[owner]->rsrc_incr("callouts", obj, -n, resources["callouts"],
				 FALSE);

	if (suspended && suspended[obj]) {
	    callouts = map_values(suspended[obj]);
	    for (i = sizeof(callouts); --i >= 0; ) {
		callout = callouts[i];
		if (callout != first_suspended) {
		    callout[CO_PREV][CO_NEXT] = callout[CO_NEXT];
		} else {
		    first_suspended = callout[CO_NEXT];
		}
		if (callout != last_suspended) {
		    if (callout[CO_RELHANDLE] != 0) {
			remove_call_out(last_suspended[CO_RELHANDLE]);
			last_suspended[CO_RELHANDLE] = callout[CO_RELHANDLE];
		    }
		    callout[CO_NEXT][CO_PREV] = callout[CO_PREV];
		} else {
		    if (callout[CO_RELHANDLE] != 0) {
			remove_call_out(callout[CO_RELHANDLE]);
		    }
		    last_suspended = callout[CO_PREV];
		}
	    }
	    suspended[obj] = nil;
	}
    }
}

/*
 * NAME:	release()
 * DESCRIPTION:	release a callout
 */
static void release()
{
    mixed *callout;
    object obj;
    int handle;

    callout = first_suspended;
    obj = callout[CO_OBJ];
    handle = callout[CO_HANDLE];
    if ((first_suspended=callout[CO_NEXT])) {
	first_suspended[CO_PREV] = nil;
	suspended[obj][handle] = nil;
    } else {
	last_suspended = nil;
	suspended = nil;
	suspend = 0;
    }
    owners[callout[CO_OWNER]]->rsrc_incr("callouts", obj, -1,
					 resources["callouts"], FALSE);
    obj->_F_release(handle);
}


/*
 * NAME:	prepare_reboot()
 * DESCRIPTION:	prepare for a reboot
 */
void prepare_reboot()
{
    if (previous_program() == DRIVER) {
	downtime = time();
    }
}

/*
 * NAME:	reboot()
 * DESCRIPTION:	recover from a reboot
 */
void reboot()
{
    if (previous_program() == DRIVER) {
	object *objects;
	int i;

	downtime = time() - downtime;
	objects = map_values(owners);
	for (i = sizeof(objects); --i >= 0; ) {
	    objects[i]->reboot(downtime);
	}
    }
}
