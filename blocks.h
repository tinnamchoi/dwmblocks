//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/     /*Command*/                                                /*Update Interval*/ /*Update Signal*/
	{"Mem:",     "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 1,                  0},
	{"Bright:",  "cat /sys/class/backlight/amdgpu_bl0/brightness",          0,                  2},
	{"Sound:",   "pamixer --get-volume",                                    0,                  3},
	{"Battery:", "cat /sys/class/power_supply/BAT0/capacity",               300,                0},
	{"",         "date '+%Y%m%d-%H%M%S (%a)'",                              1,                  0},
	{"",         "echo $(( `date +%s` - 1086267120 ))",                     1,                  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
