/* user and group to drop privileges to */
static const char *user  = "nobody";

static const char col_cyan_adapta[] = "#009ab2";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  col_cyan_adapta,   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message =       
	"     .--------.\n"
	"    / .------. \\\n"
	"   / /        \\ \\\n"
	"   | |        | |\n"
	"  _| |________| |_\n"
	".' |_|        |_| '.\n"
	"'._____ ____ _____.'\n"
	"|     .'____'.     |\n"
	"'.__.'.'    '.'.__.'\n"
	"'.__  |LOCKED|  __.'\n"
	"|   '.'.____.'.'   |\n"
	"'.____'.____.'____.'\n"
	"'.________________.'\n";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "9x15";
