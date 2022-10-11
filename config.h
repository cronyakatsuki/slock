/* user and group to drop privileges to */
static const char *user  = "crony";
static const char *group = "crony";

static const char *colorname[NUMCOLS] = {
	[INIT] = "#a6da95",       /* after initialization */
	[INPUT] = "#8aadf4",    /* during input */
	[FAILED] = "#ed8796",   /* wrong password */
	[CAPS] = "#ee99a0",         /* CapsLock on */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color6",       STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		{ "color3",       STRING,  &colorname[CAPS] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
