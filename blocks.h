//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/     /*Command*/                                                /*Update Interval*/ /*Update Signal*/
	{"Mem:",     "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 7,                  0},
	{"Bright:",  "cat /sys/class/backlight/amdgpu_bl0/brightness",          7,                  0},
	{"Sound:",   "pamixer --get-volume",                                    7,                  0},
	{"Battery:", "cat /sys/class/power_supply/BAT0/capacity",               7,                  0},
	{"",         "date '+%Y%m%d-%H%M%S (%a)'",                              7,                  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
