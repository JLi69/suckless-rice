/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */	
	[SchemeNorm] = { "#ffffff", "#222222" },	
	//[SchemeNorm] = { "#ffffff", "#dd8800" },
	//[SchemeSel] = { "#eeeeee", "#005577" },	
	[SchemeSel] = { "#eeeeee", "#dd8800" },
	[SchemeOut] = { "#000000", "#00ffff" },	
	//[SchemeOut] = { "#000000", "#dd8800" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 20;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;