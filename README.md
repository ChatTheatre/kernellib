
# Live Archive of the DGD Kernel Library (aka `kernellib`)

## What is DGD Kernel Library?

The `kernellib` was designed to serve as a better foundation than previous third-party [LPC mudlibs](https://en.wikipedia.org/wiki/LPMud), and as such would leverage and demonstrate the powerful capabilities of [Dworkin's Game Driver](http://www.dworkin.nl/dgd/) (aka DGD). The original `kernellib` was written by Felix A. Croes (aka @dworkin) in 1993.

This `kernellib` was originally included inside the DGD distribution, but over time it moved into it's own reposistory on [GitHub](https://github.com/dworkin/kernellib).

## What is this fork?

This repository is indended as a "live archive" fork of @dworkin's `kernellib` for the DDG LPC driver, based initially on the "final commit" to that repository 2016-03-5: https://github.com/dworkin/kernellib/commit/e602afe6cb5328d05ccce99c2cd38add02359591.

There were changes in the last few years of `kernellib` to add support for @dworkin's new, but non-open source, multi-threaded driver [Hydra](http://www.dworkin.nl/hydra/) that removed features from earlier versions of the `kernellib`, that were reinstated by @shentino for compatiblity with existing mudlibs. The changes reinstated were mostly about tracking of callouts as a resource, which @dworkin removed due to performance conflicts with Hydra, but also includes a few other small changes. These changes are in PR #1 https://github.com/ChatTheatre/kernellib/pull/1 which catches this fork up to @Shentino's https://github.com/shentino/kernellib/commit/cd81684e7e018c4ec09ef47fdc629891bb941779

## Why are we keeping this repository?

DGD was originally created in the early 90s to allow for the creation of very sophisticted text Multi User Dungeons (aka MUDs) on the internet.

In the mid-90s, DGD's architecture proved so powerful that a number of companies used a commercial version of DGD to create some of the first major chat rooms on the internet, most notably iChat which was used for the first [Yahoo! Chatrooms](https://en.wikipedia.org/wiki/Yahoo!_Messenger#Group_conversations_(formerly_Yahoo!_Chat)).

In February 1999 Skotos Tech Corporation aquired a license to the DGD from Acuity Corporation who had an exclusive license, and began to fork both the DGD driver library and the `kernellib` itself. Some patches were exchanged by both parties over the next decade, but increasingly these versions of DGD driver and `kernellib` diverged.

Ultimately @dworkin aquired back his rights to DGD, and released version 1.4 of DGD and the `kernellib` as open source. DGD was released under the [GNU Affero General Public License v3](http://www.fsf.org/licensing/licenses/agpl-3.0.html) and the `kernellib` was released as public domain.

Over the next decade @Dworkin's DGD driver and the Skotos fork of DGD merged and forked several times, but today both are fairly close, and there is are some efforts to no longer use the Skotos fork of the DGD driver and use @Dworkin's soley.

However, the original `kernellib` and the Skotos `kernellib` have diverged tremendously, and no attempt has been made to merge them. Thus this repository thus differs from the Skotos `kernellib` significanly.

In 2019 Skotos Tech Corporation released [SkotOS](https://github.com/ChatTheatre/SkotOS) as open source, which included its fork of the `kernellib`, along with an example of a prose-based narrative game server called [The Gables](https://www.ChatTheatre.com), as well as a new open source user account manager, an HTML5 client and other software to support modern web browsers, These were released with the goal of encouraging other parties to develop and create their own games, chat rooms, or other online services. Skotos Tech Corporation closed in 2020 and transfererd its rights to its successor, Dyvers Hands Productions LLC Series 5, dba "ChatTheatre.com", who is acting as steward of this open source community today.

This archive is being kept to help developers and archivists who want to better understand DGD, and the differences between the @dworkin's `kernellib` and the `kernellib` used in [SkotOS](https://github.com/ChatTheatre/SkotOS) and other forks of `kernellib`.

## Copyright & Status

Unless otherwise noted, the contents of this repository are public domain.

@dworkin wrote in [2016-03-5](https://github.com/dworkin/kernellib/commit/e602afe6cb5328d05ccce99c2cd38add02359591):

> This is the final release of the Kernel Library, for Hydra and DGD.  The
> kernellib is and has always been in the public domain (even though it was
> distributed with DGD), so this repository includes the full history.
>
> The last release only modifies this file, and moves everything else into
> a src directory; it will work fine with current versions of DGD and Hydra.
> There will be no further updates, and no more pull requests will be
> accepted.

<p xmlns:dct="http://purl.org/dc/terms/" xmlns:vcard="http://www.w3.org/2001/vcard-rdf/3.0#">
  <a rel="license"
     href="http://creativecommons.org/publicdomain/zero/1.0/">
    <img src="http://i.creativecommons.org/p/zero/1.0/88x31.png" style="border-style: none;" alt="CC0" />
  </a>
  <br />
  To the extent possible under law,
  <a rel="dct:publisher"
     href="https://www.ChatTheatre.com">
    <span property="dct:title">Dyvers Hands Productions LLC Series 5</span></a>
  has waived all copyright and related or neighboring rights to
  <span property="dct:title">DGD Kernel Library (aka `kernellib`)</span>.
This work is published from:
<span property="vcard:Country" datatype="dct:ISO3166"
      content="US" about="https://github.com/ChatTheatre/kernellib">
  United States</span>.
</p>

## Contributing

This repository is intended as a "live archive", which means that we don't plan to add functionality to the repository, but we will accept PRs to add documentation, comment code, address bugs or security issues, or address problems using this library with @dworkin's DGD on modern operating systems.

In paricular, we would love to have more general installation instructions, architecture documentation, code commentary, as well as articles about differences between this code and other forks of the `kernellib`.

We require that before any first PR from a contributor to this repository can be accepted, their commit must be GPG signed, and it must contain a comment that include a similar CC0 disclaimer as above, which can be obtained from [Creative Commons CC0](https://creativecommons.org/choose/zero/).

## Installation

TO BE WRITTEN

##Historical

Many of the websites that supported DGD and the `kernellib` no longer seem to be available, or are hard to find as they are only available via Archive.org. I've only included those here that have attribution, and that appear to be public domain or have a permissive license. You'll have to browse their sources to find their proper license details. Most of the following appear to be [GNU Free Documentation LIcense, V1.3 or later](https://www.gnu.org/licenses/fdl-1.3.en.html) and are the only exceptions known so far to this repostory being public domain.


### User Commands in the Stock Kernel Library

(by Noah Gibbs, sourced via [archive.org](https://web.archive.org/web/20080418081830/http://phantasmal.sourceforge.net/DGD/Kernel/Commands.html))

User Commands in the Stock Kernel Library

The Kernel MUDLib does very different things for regular users and wizards (those that have special access such as admin). Let's look at how it works for a regular user first.

A regular user is anybody that hasn't been specifically made a wizard. The only exception is "admin". S/he is a wizard automatically just because s/he's got that name. When a regular user logs in they don't need a password. That's true only for the stock, unmodified kernel MUDLib but so is everything else on this page. Like everything else here it can be modified if you muddle with the MUDLib.

The regular user can do a number of things. S/he can use the `say` command to say stuff. For instance:
```
      say Hello, all!
```
S/he can use `emote` to do something similar. If s/he types `emote jumps for joy!` and his/her name is Panda everybody will see `Panda jumps for joy!`. If you're impatient you can abbreviate `say` with a single-quote and emote with a `colon`. Just put either punctuation character at the front of a command line right where you'd type `say` or `emote`.

To give a private message to somebody else you can `tell` them something. For instance: `tell Panda I'm happy too!` will tell Panda how thrilled you are.

To find out who's on the MUD you can type `users`. It'll give you the list. Then you can tell them things with the other commands.

You can set your password with the `password` command, typed by itself, but that doesn't do anything useful unless you're a wizard. If you are then you can do this. If you're not then you can still set the password but it does nothing useful. You won't be asked for it on login.

And you can quit. Good to know. You just type `quit`.

### Wizard/Administrator Commands

The `code` command lets you execute a little snippet of code and get the value back. DGD will automatically make a temporary object for you in a temporary file that executes your code. DGD even predeclares 26 one-letter lowercase variables of type `mixed` for you to use in your code just in case you need some temp vars.

You can type `history` by itself or followed by a number to access the history of values your `code`, `compile` and `clone` commands have been returning. You can access these values in the arguments of many commands by referring to them as $1, $2, $3, et cetera.

The `clear` command clears the command history.

The `compile` command recompiles an object. Some objects won't like being recompiled - for instance if stuff inherits from them. You give it the filename and it recompiles the file. You can just give the filename without the path if you're in the correct current directory. See `cd`, `ls`, `pwd`, and so on for how to tell if you're in the correct directory.

The `clone` command clones an object and puts it in the command history for your enjoyment and edification. You can later take the `status` or `destruct` it. Make sure to destruct what you create!

The `destruct` command lets you destruct objects. Doing so can be useful in your efforts to recompile inheritable (library) objects. You're still better off with an object daemon doing it for you, but `destruct` will also help you test *that*.

`cd`, `pwd`, `ls`, `cp`, `mv`, `rm`, `mkdir`, `rmdir`: these are just like the regular Unix shell commands of the same names. For DOS or Windows guys: `ls` is `dir`. `cp` is `copy`. `mv` is `move`. `rm` is `del`. `pwd` tells your current directory. `mkdir` and `rmdir` are pretty much the same as in DOS. `cd` is mostly the same, but typing just `cd` by itself doesn't print the directory. Instead it changes to your home directory. You can use all these commands from your OS instead of inside the MUD, but sometimes it's more convenient to have the command line right there.

The `ed` command lets you edit a file using DGD's built-in editor. Docs on how to use it come with DGD. You can always just use the editor on your machine if you prefer. However, Windows users take note: the DGD editor is guaranteed to have the right linebreak behavior and most Windows editors (like Visual Studio, Visual C++ or Notepad) aren't. So the DGD built-in editor may be a good alternative to grabbing TextPad.

If you're the admin, another advantage is that your MUD admins can have MUD accounts, but not shell accounts on the server box. They can use the DGD editor and get access only to the files they're supposed to, and not your Unix command line nor other people's files. That's a cheaper, simpler (and worse) alternative to writing an FTP server into your MUD.

You can use the `access` command on a wizard's name to find out what s/he can access. You can use it with no argument to find out your access. With the special string "global" you can find out what areas allow everybody read access. You can use it on a file to find out who has what access to it.

`grant` - TBW

`ungrant` - TBW

The `quota` command lists a wizard's resource usage. With no arguments it gives the usages for the user that typed it. With one argument it gives the usages for the wizard whose name is given. With two arguments it takes a wizard's name and a resource type (such as ticks, stack, callouts, etc) to give the usage for. With three arguments of the form "quota <user> <rsrc> <limit>" it will try to set that user's limit on that resource to the number specified if you've got the necessary privilege to do that. For most limits, -1 means infinite.

The `rsrc` command typed by itself will show the MUD's total usage of the same resources `quota` affects. This doesn't just show your usage. It shows everybody's. With a resource name and a numerical limit rsrc will set the new limit to the given value. With just a resource name rsrc will list the usage of that resource by all wizards.

The `people` command is just a slightly beefier `users` command. It displays IP addresses of those logged in.

The `status` command shows a little summary of driver status. Try it out and see! You can also use it with an argument to get the status of an object. Try some object names and some values from the history list.

The `swapout` command will attempt to swap out all objects. This could be useful for testing, prior to a statedump, or when the MUD's RAM footprint is objectionably large and not many users are logged in.

The `statedump` command will write out a dump of the MUD's current state which could be good for bootstrapping the MUD later, backing up in case of crashes, or duplicating the MUD and running another copy.

The `shutdown` command attempts to shut down the MUD.

The `reboot` command attempts to reboot the MUD.

If you try many commands incorrectly they will give you usage information. This may or may not tell you more about what the command does, but it'll at least tell you how you can try to find out!

Noah Gibbs

## Should You Use the Kernel Library for Your New MUD Library?

(By Noah Gibbs, sourced from [Archive.org](https://web.archive.org/web/20080405095821/http://phantasmal.sourceforge.net/DGD/LibWriting/UseKernel.html)

DGD comes with a little library called the Kernel Library. It's not a game, or even a particularly good chat server. Most of what it does is infrastructure, stuff that may not be obvious when you look at what it does. So: what does it do for you? Why would you use it? Why wouldn't you use it?

### What Does It Provide?

The Kernel Library builds on top of DGD. And any game that can be built on top of DGD can be built on top of the Kernel Library, though it may require some funny contortions to make some of them work. However, some kinds of *code* that would otherwise work in DGD won't work with the Kernel Library. It's just that there's always a way to replace that code (in a game) with something else that works. It's a little like saying that you can do anything in the C programming language without "goto". It may take some re-structuring, but you can do it. And like "goto", most of the things the Kernel Library restricts are things you probably shouldn't use.

So other than being strict with you, what does the Kernel Library do for you? Mainly, it provides upgradeability, security, and resource management. For details, read about [the scope of the Kernel Library]().

For more information about building on top of the Kernel Library, see the [Getting Started with the Kernel Library](https://web.archive.org/web/20080405095821/http://phantasmal.sourceforge.net/DGD/Kernel).

### Why Would You Use It?

The Kernel Library provides a standard base for building. If DGD changes, the Kernel Library can help shield you. For instance, when the behavior of send_message changed several years ago, the Kernel Library changed its behavior so that all Kernel-based MUD Libraries still worked on new versions. The Kernel's abstraction layer can stay standard, even across different versions of DGD.

The Kernel provides some future-compatibility — it uses thread-local storage in several places that you might not know to, so every Kernel-based MUD Library is more likely to work well with the upcoming multiprocessor version of DGD. You'll still need to fine-tune, but the Kernel gives the basics for free.

By keeping your programming on the straight and narrow, the Kernel library is also handling needs you don't (yet) know you have. For instance, you may not need to upgrade your objects initially, but if you use the Kernel then you can be certain that if that need comes up, you can meet it. Similarly, you may initially have only a single administrator on your MUD. If you then need to add a second or third administrator, the Kernel's built-in security makes it much easier to keep them from intentionally or negligently causing problems. Since the Kernel Library was designed with very large projects in mind, and has been used in very complex projects, you can be sure that it's suitable for them. Your own homebrew solution may require more work to fix the same problems.

The Kernel provides a base for various modules and upgrades. If you start with it, you have several Object Daemons to choose from, and they should require little or no modification. Phantasmal recently added an SSH daemon that had been written for the Kernel Library, and it required only about an hour of effort to get it working... Phantasmal is Kernel-based, so the upgrade worked immediately and used Phantasmal's game code and user objects without a hitch.

### Why Wouldn't You Use It

Some people prefer to write their own code, just in general. That's usually a very, very poor reason to avoid the Kernel Library — it solves many subtle problems, and you really need to understand them thoroughly if you don't use the Kernel. Thread-local storage, object upgrading, information being passed insecurely through the call-stack... These are all topics that need to be addressed, but for which there is no good documentation. The Kernel solves each of them, and many more.

A more common reason to avoid it is that it seems too complex. The Kernel Library seems to give very little until you understand it well, and there's definitely a lot of code there. However, as this page should demonstrate, the Kernel Library addresses a lot of different concerns, and it does so quite well. It's complicated, but usually only because it has to be complicated. If there's something you're not concerned with that the Kernel Library does (like security, say), you're probably better off tearing the security-related code out of the Kernel Library and using the result than writing your own replacement... The Kernel does a ridiculous variety of stuff, and it will be very hard for you to make sure you do all the same things.

Another common complaint is that the layout is unfamiliar. The Kernel Library has an unusual security model based on objects checking what program is calling them. It handles significant security and data integrity issues by checking the pathname of the program, so moving a piece of code from one directory to another (or calling it from a different function or object) can significantly change the behavior. The security model can be both powerful and elegant once you understand it, but it requires significant effort to understand. This is a significant issue — requiring MUD Library authors to understand unfamiliar code has held DGD back for years, and it's hard to find builders and coders who already know LPC, let alone DGD's Kernel Library. However, the only solution to the issue is to turn your MUD into yet another LPMUD clone. If you're doing something new and innovative, you're going to have to work with some unfamiliar code, and so are your builders. If you're *not* doing something new and innovative, why are you bothering to write your own MUD Library?

------

### The Kernel Library and Persistence

There was an e-mail exchange between Frank Schmidt and Dworkin about the suitability of the Kernel Library as a general-use MUD Library. Some of it is excerpted below.

```
> The main idea is that it requires mudlib code ontop of it, I haven't said
> anything else. But the kernel lib is far from what I see 'fit' for MUD
> programmers world wide, when lacking lots of "general" functionality to
> handle arrays, strings, mappings, math, sorting algorithms, etc, etc,
> which in my opinion belongs in the auto object. (Previous mailinglists
> explains why) And that's just one of the issues, each time you need
> something special (which you know DGD can offer), a General kernel lib
> will probably not support it.

Your view of what a kernel library should be seems to agree perfectly
with the function of the objects in the /dgd directory tree in the
2.4.5 mudlib -- which is certainly not that of DGD's kernel library.
Beyond that, I think you also fail to understand what the kernel
library can do, as evinced by your earlier comment that it "occupies"
the auto object and driver object.  If there is one thing that the
kernel library is good at, it is modifying or completely overriding
the behaviour of those two objects.

I think that some of this blindness is caused by the extraordinary
success of LPmud 2.4.5.  To get beyond that, let's take a look at
a completely different mud, Ultima Online, comparing features with
those of traditional LPmuds:

 - UO is persistent.

   Persistence is DGD's most important single feature (I like the
   term "continuous mud" better, but "persistent mud" is the
   standard term these days).  A persistent mud needs a design
   radically different from that of a traditional LPmud:

    - There has to be a way to change the behaviour of existing
      objects.  The kernel library is designed in such a way that
      upgrading objects -- that is, recompiling them without first
      destructing them -- is possible for all objects, given the
      limitations imposed by LPC inheritance.
    - If you have guest-programmer wizards like traditional
      LPmuds, you need a way to limit the resources available to
      individual wizards, since rebooting the mud to get rid of
      undesirable objects is not an option.  The kernel library
      has a generic resource management system which manages
      such things as number of objects or number of callouts by
      default, and to which new mudlib-specific resources can be
      added at will.
    - Such functionality as string formatting should not be in the
      auto object.  Having to recompile the 3D space code because
      a change was made in string formatting is ridiculous.

 - UO has a custom client.

   The kernel library cannot make any assumptions about what sort
   of client is being used.  It cannot even assume that everyone
   uses the same client.  It merely attempts to be as little in
   the way as possible -- not only in the matter of communications.

 - UO has no traditional rooms, add_actions, etc.

   All such things have no place in the kernel library's auto object.
   Similarly, nothing that is not needed in  muds within its
   target range has a place in the kernel library.


```

### What Does the Kernel Library Actually Do?

(by Noah Gibbs, source from [Archive.org](https://web.archive.org/web/20050825000844/http://phantasmal.sourceforge.net/DGD/Kernel/ScopeOfLib.html))

DGD is able to fully recompile all code in place, if you meet certain restrictions. The Kernel Library, used properly, makes sure that you obey those restrictions. There's no way to violate them, in fact, if you don't modify anything under ⁄kernel, because the Kernel Library simply won't allow you to. So the Kernel Library helps make sure that all your code can be upgraded instantly and in-place.

The Kernel Library also provides security. If you've got code and data files in your directories, you'd like it if other administrators and builders can't change them, and for some of the files, you don't want other admins (or their objects and programs) to be able to read them. The Kernel Library prevents that, not only for your files but also for your compiled programs running in memory. That means you don't need to worry as much about trusting other administrators in the game, since they can't mess up your stuff.

The Kernel Library also provides certain kinds of object management support and user management support. You can register an object manager with the library, and the Kernel Library will call hook functions in your object manager whenever files are compiled, inherited or included so that you can do the rest of the work necessary to upgrade every object in place (you can also use somebody else's object manager, but it still needs the Kernel Library). The Kernel Library will keep track of user connections and disconnections, and provide you with a nice interface to it. There are similar facilities to track errors, and cause all programs to implicitly inherit an AUTO-type object of your choice.

The Kernel Library will also keep track of resource usage for every administrator in the game. The amount of memory space and processor time and the number of DGD objects are tracked automatically, as are several more obscure commodities. It's easy to add more resource tracking for things like in-game money or power of monsters to keep your administrators and their areas from spawning too much of a good thing.

There are some additional functions defined by the Kernel Library for creating signals which an object can send and other objects can subscribe to. That allows for various events occurring, and provides an infrastructure to make it happen in code.

```
From: dgd at list.imaginary.com (Par Winzell)
Date: Mon Sep 17 12:39:01 2001
Subject: [DGD] Could it work...

>>I'm sure I've missed loads but I wasn't entirely sure why the kernel lib was
>>so important to use. The above does seem tricky but doesn't sound
>>impossible. With looking at the kernel I'm sure we can work it out seeing as
>>that's how we've coded the connection stuff etc. so far.
>>Or am I being dim?
>>
> I think the point people are trying to make is that very careful thought
> has gone into making the kernel lib, and by using the kernel lib, you are
> saved from doing a lot of trial-and-error attempts at your own 'kernel
> lib'.  Especially if one is not terribly interested in the knitty-gritty
> details, that's where I'd assume the kernel lib helps; at least that's the
> point I think Par was


That's pretty much it. You have to ask yourself, how much of what the
kernel library gives me do I need? And if that amount is large enough,
then you need to question if it is realistic to believe you can -save-
effort by -not- using it.

If you are going for a truly persistent Mud, i.e. you plan on rebooting
only from state dumps once your Mud is up and running, then you -have-
to either use the kernel library, or reimplement much of what it does.
That is a non-trivial undertaking, to say the least.

Going persistent is a big deal. When you're persistent, you realize, you
will never again cold-start your game. You never again get to feel like
you're cleaning away all the old cobwebs. If you clone an object and you
lose track of the clone, it's going to stay with you for eternity. If
you compile a program and forget where it is, it'll stay compiled and
forgotten forever. Crap builds up. If you make a terrible error a year
into your Mud's uptime, an error that causes you not to be able to log
in, you're screwed -- you have to go back to a saved statedump from a
few days earlier, or if you didn't save any, lose all your state.

If Matt wants to avoid all this complexity, he should not try for the
persistence right now. It cannot be overstated what a difference this
makes. Save inventories and vital player data to file, perhaps using the
trusy old save_object() and restore_object(). Worry about persistence in
a few years. You really don't want to go for persistence as your first
project.

Zell
```

------

```
Date: Mon Sep 17 12:51:00 2001
Subject: [DGD] Could it work...

Matt,

> To be honest we looked at the kernel lib and had no idea what was going on
> ;) So with a lot of work and head banging we built our own system from the
> ground up. The great thing about that is that I know what every little bit
> of code does. I was unsure about working with something I couldn't
> understand. Maybe now we can look back and say ... 'oops' but I think it's
> okay...


The kernel library is not particularly friendly, true, and I completely
agree that it is good to learn why you need something before you start
using it. To limit the amount of "oops" that happens, seriously consider
my suggestion not to start off with a persistent Mud. Then over time as
you run the Mud, take note of how often you need to cold-start it and
consider what would happen if you couldn't do that, ever. That'll give
you a first appreciation of what need the kernel library attempts to fill.

Zell
```

------

```
Date: Tue Sep 18 19:25:01 2001
Subject: [DGD] Could it work...

On Wed, Sep 19, 2001 at 12:22:35AM +0100, mtaylor wrote:
> Me again I'm afraid,
>
> My coding partner thinks that we can use what we need of the kernel lib to
> develop our own system. The good thing for us about doing that is that we
> will then understand what is going on.
>
> Does anyone have the time (and/or patience) to list what it is the kernel
> lib does and very briefly how and why it does it.

Disclaimer: I doubt this list is complete.

The kernel-lib...

- provides the basic ability to add users, grant users access, grant
  users limited quota of objects, stack/ticks/callout-usage, to avoid
  someone going ahead and creating 60000 clones of some object and
  thereby taking the game down.

- provides the ability for external objects to 'hook' themselves into
  the /kernel/sys/driver.c object (and one or two other /kernel
  objects) so that you will be notified if an object is compiled,
  cloned, destructed, freed, inherited, a file #include'd, etc.

  This is where you would hook up an 'Object DB' that keeps track of
  the inheritance information so that you can write your own 'upgrade'
  command that recompiles whatever is necessary.  This is one of the
  things that is _not_ provided by the kernel-lib. :)

- provides a basic wiztool (with a very nice 'store results for reuse'
  approach).

- enforces that inheritables, clonables and 'other' code are in
  separate directories, 'lib/' subdirs for inherities, 'obj/' subdirs
  for clonables and, more recently, 'data/' subdirs for LWOs.

I'm sure there are other useful things but these are just some that
come to mind right now.

Hope this helps,

Erwin.
--
Erwin Harte
```

### Install Notes

(From DGD List Archives)

```
Message-ID: <51C603FB.9010707@is-here.com>
Date: Sat, 22 Jun 2013 15:07:23 -0500
From: Erwin Harte <harte@is-here.com>
To: "All about Dworkin's Game Driver" <dgd@dworkin.nl>
Subject: [DGD] DGD on Raspberry Pi

If you want a $35 personal DGD server in your back pocket.

     http://www.raspberrypi.org/faqs

Mine is a previous generation Model B with 256MB, the newer ones have 512MB for
the same price, as I understand it. The Model B has Ethernet. I installed
Raspbian (Debian derivative specifically for the rPi) on this:

$ ssh pi@moonpi
pi@moonpi's password:
Linux moonpi 3.6.11+ #456 PREEMPT Mon May 20 17:42:15 BST 2013 armv6l
<...>
pi@moonpi ~ $ git clone https://github.com/dworkin/dgd.git
<...>
pi@moonpi ~ $ git clone https://github.com/dworkin/kernellib.git
<...>

The yacc/bison program isn't part of the default install, so we'll want that:

pi@moonpi ~/dgd/src $ sudo apt-get install bison
<...>

Nothing to configure since this is a Linux install:

pi@moonpi ~ $ cd dgd/src
pi@moonpi ~/dgd/src $ time make
<...>
gcc -O -g  -o a.out alloc.o error.o hash.o swap.o str.o array.o object.o sdata.o
data.o path.o editor.o comm.o call_out.o interpret.o config.o ext.o dgd.o `cat
comp/dgd` `cat lex/dgd` \
           `cat ed/dgd` `cat parser/dgd` `cat kfun/dgd` `cat lpc/dgd` \
           `cat host/dgd` -ldl

real    5m37.262s
user    4m30.360s
sys    0m6.840s

Go back to the kernellib directory:

- Edit doc/kernel/kernel.dgd for your actual location.
- mkdir ../tmp

pi@moonpi ~/kernellib $ ~/dgd/bin/driver doc/kernel/kernel.dgd
Jun 22 19:35:06 ** DGD 1.4.19
Jun 22 19:35:06 ** Initializing...
Jun 22 19:35:07 ** Initialization complete.
<...>

The telnet program isn't part of the default Raspbian install:
pi@moonpi ~/kernellib $ sudo apt-get install telnet
<...>

pi@moonpi ~/kernellib $ telnet localhost 6047
Trying ::1...
Connected to localhost.
Escape character is '^]'.

DGD 1.4.19 (telnet)

login: admin
Pick a new password:
Retype new password:
Password changed.
# status
                                           Server:       DGD 1.4.19
------------ Swap device -------------
sectors:        135 /      1024 ( 13%)    Start time:   Jun 22 19:35:06 2013
sector size:   0.5K
swap average:  0.11, 0.02                 Uptime:       00:00:32

--------------- Memory ---------------    ------------ Callouts ------------
static:      128656 /    256344 ( 50%)    short:         1 (100%)
dynamic:      86856 /    261120 ( 33%) +  other:         0 (  0%) +
              215512 /    517464 ( 42%)                   1 /      100 (  1%)

Objects:         23 /       500 (  5%)    Users:         1 /       40 (  3%)

#

--Erwin
____________________________________________
https://mail.dworkin.nl/mailman/listinfo/dgd
```

## More Kernel Library links only on Archive.org

Saved at 2020-08-22 01:08
- [The Phantasmal MUDlib for DGD: The Kernel Library](https://web.archive.org/web/20120607183732/http://phantasmal.sourceforge.net:80/DGD/Kernel/index.html)
- [The Kernel Library for DGD: Commands in the Kernel](https://web.archive.org/web/20080418081830/http://phantasmal.sourceforge.net/DGD/Kernel/Commands.html)
- [The Kernel Library for DGD: Layers of DGD](https://web.archive.org/web/20080418061133/http://phantasmal.sourceforge.net/DGD/Kernel/Layers.html)
- [The Phantasmal MUDlib for DGD: Inheritance in the Kernel](https://web.archive.org/web/20120717014107/http://phantasmal.sourceforge.net:80/DGD/Kernel/Inheritance.html)
- [The Kernel Library for DGD: Extending the Kernel](https://web.archive.org/web/20080430230807/http://phantasmal.sourceforge.net/DGD/Kernel/Modifying.html)
- [The Kernel Library for DGD: Kernel Security](https://web.archive.org/web/20080408090748/http://phantasmal.sourceforge.net/DGD/Kernel/Security.html)
- [The Kernel Library for DGD: Object Creators and Owners](https://web.archive.org/web/20080415183759/http://phantasmal.sourceforge.net/DGD/Kernel/ObjectOwners.html)
- [The Kernel Library for DGD: Users and Connections](https://web.archive.org/web/20080416223034/http://phantasmal.sourceforge.net/DGD/Kernel/UserConnections.html)
- [The Kernel Library for DGD: Debugging with the Kernel](https://web.archive.org/web/20080409212124/http://phantasmal.sourceforge.net/DGD/Kernel/Debugging.html)
- [The Kernel Library for DGD: Adding to your MUDLib](https://web.archive.org/web/20080501121118/http://phantasmal.sourceforge.net/DGD/Kernel/Adding.html)
- [The Kernel Library for DGD: Directory Structure](https://web.archive.org/web/20080406145155/http://phantasmal.sourceforge.net/DGD/Kernel/Directories.html)
- [The Kernel Library for DGD: Errord](https://web.archive.org/web/20080418005755/http://phantasmal.sourceforge.net/DGD/Kernel/Errord.html)
- [The Kernel Library for DGD: Breaking Up Functions](https://web.archive.org/web/20080417011302/http://phantasmal.sourceforge.net/DGD/Kernel/Threading.html)
- [The Kernel Library for DGD: Extra AUTO Objects](https://web.archive.org/web/20080415183804/http://phantasmal.sourceforge.net/DGD/Kernel/SecondAuto.html)
- [The Kernel Library for DGD: Object Manager](https://web.archive.org/web/20080411182423/http://phantasmal.sourceforge.net/DGD/Kernel/ObjectManager.html)
- [Phantasmal Admin Tutorials: Compiling Programs](https://web.archive.org/web/20080415213045/http://phantasmal.sourceforge.net/Tutorial/Admin/Compiling.html)
- [Phantasmal Admin Tutorials: Evaluating Arbitrary Code](https://web.archive.org/web/20050826011728/http://phantasmal.sourceforge.net/Tutorial/Admin/Evaluating.html)
- [Phantasmal Admin Tutorials: Access, Resources and Quotas](https://web.archive.org/web/20050825153455/http://phantasmal.sourceforge.net/Tutorial/Admin/Resources.html)
- [The Kernel Library for DGD: Email Archive](https://web.archive.org/web/20080429215118/http://phantasmal.sourceforge.net/DGD/Kernel/EmailArchive.html)
- [The Phantasmal MUDlib for DGD: Slush Bucket](https://web.archive.org/web/20120607070621/http://phantasmal.sourceforge.net:80/DGD/SlushBucket.html)

## Bucket of DGD links only on Archive.original

DGD & LPC
- [The Phantasmal MUDlib for DGD: DGD, LPC & MUDLib](https://web.archive.org/web/20160317125914/http://phantasmal.sourceforge.net/DGD/index.html)
- [The Phantasmal MUDlib for DGD: (untitled)](https://web.archive.org/web/20120607094214/http://phantasmal.sourceforge.net/DGD/Manual/index.html)
- [The Phantasmal MUDlib for DGD: CSharp vs DGD](https://web.archive.org/web/20120607070616/http://phantasmal.sourceforge.net/DGD/CSharp_vs_DGD.html)
- [The Phantasmal MUDlib for DGD: Contributing to DGD](https://web.archive.org/web/20120607183722/http://phantasmal.sourceforge.net/DGD/Contribute.html)
- [The Phantasmal MUDlib for DGD: DGD Glossary](https://web.archive.org/web/20120917223736/http://phantasmal.sourceforge.net/DGD/DGD_Terms.html)
- [The Phantasmal MUDlib for DGD: Java vs DGD](https://web.archive.org/web/20120607183727/http://phantasmal.sourceforge.net/DGD/Java_vs_DGD.html)
- [The Phantasmal MUDlib for DGD: DGD MUDs](https://web.archive.org/web/20120607044849/http://phantasmal.sourceforge.net/DGD/MUDs_using_DGD.html)
- [The Phantasmal MUDlib for DGD: Miscellaneous DGD](https://web.archive.org/web/20120607033017/http://phantasmal.sourceforge.net/DGD/Misc_DGD.html)
- [The Phantasmal MUDlib for DGD: Miscellaneous DGD](https://web.archive.org/web/20120607033017/http://phantasmal.sourceforge.net/DGD/Misc_DGD.html#Websites)
- [The Phantasmal MUDlib for DGD: Skotos](https://web.archive.org/web/20120607094219/http://phantasmal.sourceforge.net/DGD/Skotos/index.html)
- [DGD and LPC: Skotos 2.0 Library](https://web.archive.org/web/20080412014722/http://phantasmal.sourceforge.net/DGD/Skotos/Skotos2.html)
- [SkotOS: SkotOS on the brink of the rewrite](http://www.alyx.com/zell/SkotOS.html)
- [DGD and LPC: Skotos Library](https://web.archive.org/web/20080515091608/http://phantasmal.sourceforge.net/DGD/Skotos/SkotosLib.html)
- [DGD and LPC:Commercial Use](https://web.archive.org/web/20080723144036/http://phantasmal.sourceforge.net/DGD/Skotos/CommercialUse.html)
- [Wayback Machine](https://web.archive.org/web/20120918084604/http://dark.home.xs4all.nl/dgd/dumpfile-format.txt)
- [Dworkin's Game Driver](https://web.archive.org/web/20120615102903/http://www.dworkin.nl/dgd)
- [LPMOO: A Simulation of LambdaMOO](https://web.archive.org/web/20120415011403/http://www.mars.org/home/rob/proj/lpmoo/)
- [DGD kfun manual](https://web.archive.org/web/20040818103815/http://dgd.maiskuil.is-here.com:8000/dgd/kfuns/)
- [DGD v1.2.112 - kfun - INDEX](https://web.archive.org/web/20120918082542/http://dgd.is-here.com/man/man.cgi)
- [GurbaLib](https://web.archive.org/web/20110817142050/http://gurba.sytes.net/%7Eerlends/gurba.html)
- [The Phantasmal MUDlib for DGD: MudOS vs DGD](https://web.archive.org/web/20120607183737/http://phantasmal.sourceforge.net/DGD/MudOS_vs_DGD.html)
- [The Phantasmal MUDlib for DGD: Slush Bucket](https://web.archive.org/web/20120607070621/http://phantasmal.sourceforge.net/DGD/SlushBucket.html)
- [The Phantasmal MUDlib for DGD: Why Use DGD?](https://web.archive.org/web/20120607033053/http://phantasmal.sourceforge.net/DGD/Why_DGD.html)
- [The Phantasmal MUDlib for DGD: Top Level](https://web.archive.org/web/20120607183717/http://phantasmal.sourceforge.net/DGD/Book/index.html)
- [The Phantasmal MUDlib for DGD: Getting DGD](https://web.archive.org/web/20120607044839/http://phantasmal.sourceforge.net/DGD/Config/index.html)
- [Archive](https://web.archive.org/web/20120301123736/http://www.rpgmud.com/lpmud-faq.htm)
- [DGD and LPC: DGD MUDLibs](https://web.archive.org/web/20080504135229/http://phantasmal.sourceforge.net/DGD/Config/MUDLibs.html)
- [DGD and LPC: Customizing DGD](https://web.archive.org/web/20080409225451/http://phantasmal.sourceforge.net/DGD/Config/Customizing.html)
- [DGD and LPC: Troubleshooting DGD](https://web.archive.org/web/20050914221932/http://phantasmal.sourceforge.net/DGD/Config/TroubleShooting.html)
- [The Phantasmal MUDlib for DGD: Game Design Issues](https://web.archive.org/web/20120607033013/http://phantasmal.sourceforge.net/DGD/GameDesign/index.html)
- [The Phantasmal MUDlib for DGD: Player Content](https://web.archive.org/web/20090505201643/http://phantasmal.sourceforge.net/DGD/GameDesign/PlayerContent.html)
- [The Phantasmal MUDlib for DGD: Persistent Game Design](https://web.archive.org/web/20100311005127/http://phantasmal.sourceforge.net/DGD/GameDesign/GamePersistence.html)
- [The Phantasmal MUDlib for DGD: In-Game Economies](https://web.archive.org/web/20090507225531/http://phantasmal.sourceforge.net/DGD/GameDesign/Economy.html)
- [The Phantasmal MUDlib for DGD: Guest Programmers](https://web.archive.org/web/20090508002158/http://phantasmal.sourceforge.net/DGD/GameDesign/GuestProgrammers.html)
- [The Phantasmal MUDlib for DGD: Ur-Objects](https://web.archive.org/web/20090508002202/http://phantasmal.sourceforge.net/DGD/GameDesign/UrObjects.html)
- [The Phantasmal MUDlib for DGD: (untitled)](https://web.archive.org/web/20120607082902/http://phantasmal.sourceforge.net/DGD/LPC/index.html)
- [DGD LPC Textbook](https://web.archive.org/web/20080516061738/http://phantasmal.sourceforge.net/DGD/LPC/section_2.html#SEC2)
- [DGD LPC Textbook](https://web.archive.org/web/20080516061746/http://phantasmal.sourceforge.net/DGD/LPC/section_31.html#SEC3)
- [DGD LPC Textbook](https://web.archive.org/web/20081101220146/http://phantasmal.sourceforge.net/DGD/LPC/section_3254.html#SEC3.2)
- [DGD LPC Textbook](https://web.archive.org/web/20080516065607/http://phantasmal.sourceforge.net/DGD/LPC/section_329.html#SEC3.2.6)
- [DGD LPC Textbook](https://web.archive.org/web/20080516080744/http://phantasmal.sourceforge.net/DGD/LPC/section_33.html#SEC3.2.10)
- [The Phantasmal MUDlib for DGD: (untitled)](https://web.archive.org/web/20120714071819/http://phantasmal.sourceforge.net/DGD/LPC/section_42.html#SEC4.0)
- [DGD LPC Textbook](https://web.archive.org/web/20080516080723/http://phantasmal.sourceforge.net/DGD/LPC/section_5.html#SEC5.0)
- [The Phantasmal MUDlib for DGD: Writing a Library](https://web.archive.org/web/20120718093516/http://phantasmal.sourceforge.net/DGD/LibWriting/index.html)
- [DGD and LPC: Using Melville](https://web.archive.org/web/20080418230310/http://phantasmal.sourceforge.net/DGD/LibWriting/UseMelville.html)
- [The Phantasmal MUDlib for DGD: Comparison to Other Libs](https://web.archive.org/web/20050404232846/http://phantasmal.sourceforge.net/Comparison.html)
- [DGD and LPC: Using the Kernel](https://web.archive.org/web/20080405095821/http://phantasmal.sourceforge.net/DGD/LibWriting/UseKernel.html)
- [The Kernel Library for DGD: What Does It Do?](https://web.archive.org/web/20050825000844/http://phantasmal.sourceforge.net/DGD/Kernel/ScopeOfLib.html)
- [DGD and LPC: GurbaLib](https://web.archive.org/web/20050903070127/http://phantasmal.sourceforge.net/DGD/LibWriting/GurbaLib.html)
- [DGD and LPC: Heaven7](https://web.archive.org/web/20070707002401/http://phantasmal.sourceforge.net/DGD/LibWriting/Heaven7.html)
- [DGD and LPC: Start from Scratch?](https://web.archive.org/web/20080415152833/http://phantasmal.sourceforge.net/DGD/LibWriting/StartingNew.html)
- [DGD and LPC: So You Want To...](https://web.archive.org/web/20080422182042/http://phantasmal.sourceforge.net/DGD/LibWriting/SoYouWanna.html)
- [DGD and LPC: Supplementary Documentation](https://web.archive.org/web/20080409212129/http://phantasmal.sourceforge.net/DGD/LibWriting/SupDocs.html)
- [DGD and LPC: Conditional Inheritance](https://web.archive.org/web/20080410183958/http://phantasmal.sourceforge.net/DGD/LibWriting/CondInherit.html)
- [DGD and LPC: Interrupt Call](https://web.archive.org/web/20080418081836/http://phantasmal.sourceforge.net/DGD/LibWriting/InterruptCall.html)
- [DGD and LPC: State Dumps](https://web.archive.org/web/20080416040715/http://phantasmal.sourceforge.net/DGD/LibWriting/HeartBeat.html)
- [DGD and LPC: Precompiling](https://web.archive.org/web/20080411052608/http://phantasmal.sourceforge.net/DGD/LibWriting/Precompiling.html)
- [DGD and LPC: Misc Security](https://web.archive.org/web/20070708124824/http://phantasmal.sourceforge.net/DGD/LibWriting/Security.html)
- [DGD and LPC: Script Delays](https://web.archive.org/web/20080415183809/http://phantasmal.sourceforge.net/DGD/LibWriting/ScriptDelays.html)
- [DGD and LPC: Player vs Body](https://web.archive.org/web/20070403084610/http://phantasmal.sourceforge.net/DGD/LibWriting/PlayerBody.html)
- [DGD and LPC: Object Management](https://web.archive.org/web/20070708003443/http://phantasmal.sourceforge.net/DGD/LibWriting/ObjectManagement.html)
- [The Phantasmal MUDlib for DGD: Persistent MUDLibs](https://web.archive.org/web/20141114214747/http://phantasmal.sourceforge.net/DGD/LibWriting/Persistence.html)
- [DGD and LPC: Designing AUTO Objs](https://web.archive.org/web/20070707002658/http://phantasmal.sourceforge.net/DGD/LibWriting/LargeAuto.html)
- [DGD and LPC: Designing Driver Objs](https://web.archive.org/web/20070708125042/http://phantasmal.sourceforge.net/DGD/LibWriting/DriverObj.html)
- [DGD and LPC: Object Database](https://web.archive.org/web/20080422182037/http://phantasmal.sourceforge.net/DGD/LibWriting/Database.html)
- [DGD and LPC: Object Binding](https://web.archive.org/web/20070708003705/http://phantasmal.sourceforge.net/DGD/LibWriting/ObjBinding.html)
- [DGD and LPC: Rlimits](https://web.archive.org/web/20070708003319/http://phantasmal.sourceforge.net/DGD/LibWriting/Rlimits.html)
- [DGD and LPC: ⁄cmd vs wiztool](https://web.archive.org/web/20070708124835/http://phantasmal.sourceforge.net/DGD/LibWriting/CmdsOrNot.html)
- [The Phantasmal MUDlib for DGD: Changing LPC](https://web.archive.org/web/20111123061106/http://phantasmal.sourceforge.net/DGD/LibWriting/ChangingLPC.html)
- [DGD and LPC: Object Cleanup](https://web.archive.org/web/20080505102006/http://phantasmal.sourceforge.net/DGD/LibWriting/Cleanup.html)
- [DGD and LPC: Distribute a State Dump?](https://web.archive.org/web/20080405171233/http://phantasmal.sourceforge.net/DGD/LibWriting/DistStateDump.html)
- [DGD and LPC: Releasing Code](https://web.archive.org/web/20070708124701/http://phantasmal.sourceforge.net/DGD/LibWriting/Releasing.html)
- [DGD and LPC: Which License](https://web.archive.org/web/20070708124905/http://phantasmal.sourceforge.net/DGD/LibWriting/WhatLicense.html)
- [DGD and LPC: Reimplementing From Scratch](https://web.archive.org/web/20050421214857/http://phantasmal.sourceforge.net/DGD/LibWriting/Reimplementation.html)
- [DGD and LPC: Outgoing Email](https://web.archive.org/web/20070708003520/http://phantasmal.sourceforge.net/DGD/LibWriting/Sendmail.html)
- [DGD and LPC: FTPD](https://web.archive.org/web/20070707002850/http://phantasmal.sourceforge.net/DGD/LibWriting/FTPD.html)
- [DGD and LPC: HTTPD](https://web.archive.org/web/20070708003506/http://phantasmal.sourceforge.net/DGD/LibWriting/HTTPD.html)
- [DGD and LPC: InterMUD3](https://web.archive.org/web/20070708003451/http://phantasmal.sourceforge.net/DGD/LibWriting/IMUD3.html)
- [The Phantasmal MUDlib for DGD: Telnet Protocol](https://web.archive.org/web/20121020120624/http://phantasmal.sourceforge.net/DGD/LibWriting/Telnet.html)
- [DGD and LPC: NFS](https://web.archive.org/web/20050910033117/http://phantasmal.sourceforge.net/DGD/LibWriting/NFS.html)
- [DGD and LPC: WebDAV](https://web.archive.org/web/20080415152838/http://phantasmal.sourceforge.net/DGD/LibWriting/WebDAV.html)
- [DGD and LPC: Other Net Services](https://web.archive.org/web/20070707091924/http://phantasmal.sourceforge.net/DGD/LibWriting/OtherServices.html)
- [The Phantasmal MUDlib for DGD: What Does It Do?](https://web.archive.org/web/20120607033047/http://phantasmal.sourceforge.net/DGD/Operation/index.html)
- [DGD and LPC: Swapping](https://web.archive.org/web/20080420152357/http://phantasmal.sourceforge.net/DGD/Operation/Swapping.html)
- [The Phantasmal MUDlib for DGD: DGD LPC Reference](https://web.archive.org/web/20120810022551/http://phantasmal.sourceforge.net/DGD/Programming/index.html)
- [DGD and LPC: LPC Code Samples](https://web.archive.org/web/20070916061328/http://phantasmal.sourceforge.net/DGD/Programming/Code_Examples.html)
- [SSH in LPC | Get SSH in LPC at SourceForge.net](https://web.archive.org/web/20090821105151/http://sourceforge.net/projects/lpcssh)
- [Wayback Machine](https://web.archive.org/web/20080110080430/http://phantasmal.sourceforge.net/DGD/external/geir_objectd.c)
- [Wayback Machine](https://web.archive.org/web/20050825154208/http://phantasmal.sourceforge.net/DGD/external/wiztool_addon.c)
- [Wayback Machine](https://web.archive.org/web/20050429194934/http://phantasmal.sourceforge.net/DGD/external/I3Code.txt)
- [Wayback Machine](https://web.archive.org/web/20050825065208/http://phantasmal.sourceforge.net/DGD/external/mckenna_objd.txt)
- [Wayback Machine](https://web.archive.org/web/20050816063817/http://phantasmal.sourceforge.net/DGD/external/imud3d.c)
- [Wayback Machine](https://web.archive.org/web/20070912012122/http://phantasmal.sourceforge.net/DGD/external/pete-objectd.c)
- [Wayback Machine](https://web.archive.org/web/20050430090346/http://phantasmal.sourceforge.net/DGD/external/LPC_sqrt.txt)
- [Wayback Machine](https://web.archive.org/web/20050830023427/http://phantasmal.sourceforge.net/DGD/external/file_size.c)
- [Wayback Machine](https://web.archive.org/web/20050824063001/http://phantasmal.sourceforge.net/DGD/external/implode_explode.txt)
- [Wayback Machine](https://web.archive.org/web/20050831132841/http://phantasmal.sourceforge.net/DGD/external/color_parse.txt)
- [Wayback Machine](https://web.archive.org/web/20050819080353/http://phantasmal.sourceforge.net/DGD/external/sprintf.c)
- [Wayback Machine](https://web.archive.org/web/20050510095714/http://phantasmal.sourceforge.net/DGD/external/sprintf.doc.txt)
- [Wayback Machine](https://web.archive.org/web/20050826150806/http://phantasmal.sourceforge.net/DGD/external/flibs_pager.txt)
- [Wayback Machine](https://web.archive.org/web/20050826013558/http://phantasmal.sourceforge.net/DGD/external/flibs_sendmail.txt)
- [Wayback Machine](https://web.archive.org/web/20070818131818/http://phantasmal.sourceforge.net/DGD/external/shadows.txt)
- [Wayback Machine](https://web.archive.org/web/20050820130123/http://phantasmal.sourceforge.net/DGD/external/melville_parser.txt)
- [Wayback Machine](https://web.archive.org/web/20070917164243/http://phantasmal.sourceforge.net/DGD/external/time_example.txt)
- [Wayback Machine](https://web.archive.org/web/20050826113807/http://phantasmal.sourceforge.net/DGD/external/png_generation.txt)
- [Wayback Machine](https://web.archive.org/web/20050430090422/http://phantasmal.sourceforge.net/DGD/external/erwin_mudlib.txt)
- [The Phantasmal MUDlib for DGD: LPC FAQ](https://web.archive.org/web/20120713035141/http://phantasmal.sourceforge.net/DGD/Programming/LPC_FAQ.html)
- [DGD & LPC Textbook](https://web.archive.org/web/20080329054453/http://phantasmal.sourceforge.net/DGD/LPC/)
- [The Phantasmal MUDlib for DGD: non-DGD Docs](https://web.archive.org/web/20120715042843/http://phantasmal.sourceforge.net/DGD/Programming/General_Docs.html)
- [The Phantasmal MUDlib for DGD: DGD LPC Diffs](https://web.archive.org/web/20120717013043/http://phantasmal.sourceforge.net/DGD/Programming/Diffs_in_LPC.html)
- [The Phantasmal MUDlib for DGD: Unsupported Features](https://web.archive.org/web/20120718005919/http://phantasmal.sourceforge.net/DGD/Programming/Unsupported.html)
- [The Phantasmal MUDlib for DGD: Using parse_string](https://web.archive.org/web/20120718130128/http://phantasmal.sourceforge.net/DGD/Programming/Parse_String.html)
- [The Phantasmal MUDlib for DGD: sscanf in DGD](https://web.archive.org/web/20120718063616/http://phantasmal.sourceforge.net/DGD/Programming/SScanF.html)
- [The Phantasmal MUDlib for DGD: sprintf in DGD](https://web.archive.org/web/20120717183601/http://phantasmal.sourceforge.net/DGD/Programming/SPrintF.html)
- [The Phantasmal MUDlib for DGD: call_out](https://web.archive.org/web/20120718013704/http://phantasmal.sourceforge.net/DGD/Programming/CallOut.html)
- [The Phantasmal MUDlib for DGD: call_touch()](https://web.archive.org/web/20120717014117/http://phantasmal.sourceforge.net/DGD/Programming/CallTouch.html)
- [The Phantasmal MUDlib for DGD: call_trace()](https://web.archive.org/web/20120717183556/http://phantasmal.sourceforge.net/DGD/Programming/CallTrace.html)
- [The Phantasmal MUDlib for DGD: Create Funcs](https://web.archive.org/web/20120718145419/http://phantasmal.sourceforge.net/DGD/Programming/CreateFuncs.html)
- [The Phantasmal MUDlib for DGD: Atomic Functions](https://web.archive.org/web/20120718032045/http://phantasmal.sourceforge.net/DGD/Programming/AtomicFuncs.html)
- [The Phantasmal MUDlib for DGD: DGD Driver Details](https://web.archive.org/web/20120718005914/http://phantasmal.sourceforge.net/DGD/Programming/Driver_Details.html)
- [The Phantasmal MUDlib for DGD: DGD Calling Conventions](https://web.archive.org/web/20120717014122/http://phantasmal.sourceforge.net/DGD/Programming/Calling_Conventions.html)
- [The Phantasmal MUDlib for DGD: DGD Object Subtypes](https://web.archive.org/web/20120718032055/http://phantasmal.sourceforge.net/DGD/Programming/Object_Types.html)
- [The Phantasmal MUDlib for DGD: Thread-Local Storage](https://web.archive.org/web/20120715042854/http://phantasmal.sourceforge.net/DGD/Programming/ThreadLocal.html)
- [The Phantasmal MUDlib for DGD: DGD/MP and Threads](https://web.archive.org/web/20120715042849/http://phantasmal.sourceforge.net/DGD/Programming/MPThreads.html)
- [The Phantasmal MUDlib for DGD: Mappings](https://web.archive.org/web/20120718130058/http://phantasmal.sourceforge.net/DGD/Programming/Mappings.html)
- [The Phantasmal MUDlib for DGD: Linked Lists](https://web.archive.org/web/20120718032052/http://phantasmal.sourceforge.net/DGD/Programming/LinkedLists.html)
- [The Phantasmal MUDlib for DGD: Character Manipulation](https://web.archive.org/web/20120715042839/http://phantasmal.sourceforge.net/DGD/Programming/CharManip.html)
- [The Phantasmal MUDlib for DGD: Running a MUD](https://web.archive.org/web/20120607045244/http://phantasmal.sourceforge.net/DGD/Running/index.html)
- [DGD and LPC: Running a MUD](https://web.archive.org/web/20080503074925/http://phantasmal.sourceforge.net/DGD/Running/Profiling.html)
