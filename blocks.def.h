//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//
// Define the base path for scripts.
#define PATH "~/nixos/scripts/statusBar/"

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"<\x06", PATH "date.sh", 60, 1},
  {"<\x07", PATH "time.sh", 1, 2},
  {"",      PATH "battery.sh", 30, 3},
  {"<\x03", PATH "internet.sh", 10, 4},
  {"<\x02", PATH "volume.sh", 0, 5},
  {"<\x04", PATH "resources.sh", 5, 6}
}; 

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "";
static unsigned int delimLen = 5;
