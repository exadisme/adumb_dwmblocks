//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
   {"", "linver",	60,		0},
  
   {"", "temp",	2,		0},
   
   {" ", "disk",	30,		0},
   
   {" ", "mem",	12,		0},

   {" ", "swap",	30,		0},

   {"", "wifisignal",	12,		0},
	
   {"", "btconnect",	12,		0},
   
   {"", "brightness", 12,		0},
	
   {"", "volume",	12,		0},
   
   {"", "battery",	120,		0},
   
	{"", "bartime",	30,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 2;
