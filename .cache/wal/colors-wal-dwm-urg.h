static const char norm_fg[] = "#c1c5c2";
static const char norm_bg[] = "#09170c";
static const char norm_border[] = "#596d5d";

static const char sel_fg[] = "#c1c5c2";
static const char sel_bg[] = "#C88B73";
static const char sel_border[] = "#c1c5c2";

static const char urg_fg[] = "#c1c5c2";
static const char urg_bg[] = "#578B77";
static const char urg_border[] = "#578B77";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
