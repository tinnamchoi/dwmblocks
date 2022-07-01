//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/     /*Command*/                                                /*Update Interval*/ /*Update Signal*/
	{" ",       "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1,                  0},
	{" ",       "cat /sys/class/backlight/amdgpu_bl0/brightness",          0,                  2},
	{" ",       "pamixer --get-volume",                                    0,                  3},
	{" ",       "cat /sys/class/power_supply/BAT0/capacity",               300,                0},
	{"",         "date '+%Y%m%d-%H%M%S (%a)'",                              1,                  0},
	{"",         "echo $(( 3389291585 - `date +%s` ))",                     1,                  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
