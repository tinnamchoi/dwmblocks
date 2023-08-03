//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/     /*Command*/                                                /*Update Interval*/ /*Update Signal*/
	{" ",       "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1,                  0},
	{" ",       "cat /sys/class/backlight/*/brightness",                   0,                  2},
	{"",         "volume-icon.sh",                                          0,                  3},
	{" ",       "cat /sys/class/power_supply/BAT0/capacity",               300,                0},
	{"",         "date '+%Y%m%d-%H%M%S (%a)'",                              1,                  0},
	{"",         "date +%s",                                                1,                  0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 3;

