/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:size=12"
};

static const char col_cyan_adapta[] = "#00bcd4";

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */	
	[SchemeNorm] = { "#ffffff", "#222222" },	
	//[SchemeNorm] = { "#ffffff", "#dd8800" },
	//[SchemeSel] = { "#eeeeee", "#005577" },	
	[SchemeSel] = { "#eeeeee", col_cyan_adapta },
	[SchemeOut] = { "#000000", "#00ffff" },	
	//[SchemeOut] = { "#000000", "#dd8800" },
};

//Number of lines
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
