//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/sb-music",        					1,		0},
	{"", "sb-mailbox",							60,		0},
	{" :", "sb-temp",							5,		0},
	{"", "sb-volume",    							5,		0},
	{"", "date '+%b %d (%a) %I:%M%p'",      				5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " / ";
static unsigned int delimLen = 5;
