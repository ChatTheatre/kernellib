# include <kernel/kernel.h>
# include <kernel/user.h>

inherit LIB_CONN;	/* basic connection object */

int linemode;		/* process input and output line by line? */
string buffer;		/* buffered input */

/*
 * NAME:	create()
 * DESCRIPTION:	initialize
 */
static create()
{
    ::create("binary");
    linemode = 1;
    buffer = "";
}

/*
 * NAME:	receive_message()
 * DESCRIPTION:	forward a message to listeners
 */
static receive_message(string str)
{
    int len;
    string head;

    buffer += str;
    while (buffer != "") {
	if (linemode) {
	    if (sscanf(buffer, "%s\r\n%s", str, buffer) != 0 ||
		sscanf(buffer, "%s\n%s", str, buffer) != 0) {
		/*
		 * might not work properly if both delete and backspace
		 * are used
		 */
		while (sscanf(str, "%s\b%s", head, str) != 0) {
		    len = strlen(head);
		    if (len != 0) {
			str = head[0 .. len - 2] + str;
		    }
		}
		while (sscanf(str, "%s\x7f%s", head, str) != 0) {
		    len = strlen(head);
		    if (len != 0) {
			str = head[0 .. len - 2] + str;
		    }
		}

		linemode = (::receive_message(str) != MODE_RAW);
	    }
	} else {
	    linemode = (::receive_message(buffer) != MODE_RAW);
	    buffer = "";
	    break;
	}
    }
}

/*
 * NAME:	message()
 * DESCRIPTION:	send a message to the other side
 */
message(string str)
{
    if (linemode) {
	str = implode(explode("\n" + str + "\n", "\n"), "\r\n");
    }
    ::message(str);
}