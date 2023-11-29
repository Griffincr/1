/* See LICENSE file for copyright and license details. */

/* Внешний вид */
static const unsigned int borderpx  = 1;        /* толщина рамки вокруг окна */
static const unsigned int snap      = 32;       /* на каком расстоянии окно прилипает к краю экрана, другому окну... */
static const int showbar            = 1;        /* 0 не показывать панель, можно все равно показать по mod+b */
static const int topbar             = 1;        /* 0 панель внизу */
static const char *fonts[]          = { "JetBrainsMono:style=Bold:size=10", "Symbols Nerd Font:size=10" };        /* шрифт бара*/
static const char dmenufont[]       = "JetBrainsMono-Bold:size=10";            /* шрифт dmenu*/

/* Для патча dwm-barpadding */
static const int vertpad            = 10;       /* vertical padding of bar */
static const int sidepad            = 12;       /* horizontal padding of bar */

/* Для патча dwm-fullgaps-6.4 */
static const unsigned int gappx     = 12;       /* gap p1ixel between windows */

/* Для патча dwm-bar-height-spacing, который у меня не заработал */
static const int user_bh            = 10;        /* 0 means that dwm will calculate bar height, >= 1 means dwm will user_bh as bar height */

static const char col_gray1[]       = "#23252e";        /* цвет col_gray1 */
static const char col_gray2[]       = "#fafbfc";        /* цвет col_gray2 */
static const char col_gray3[]       = "#fafbfc";        /* цвет col_gray3 */
static const char col_gray4[]       = "#23252e";        /* цвет col_gray4 */
static const char col_cyan[]        = "#80e5ff";        /* цвет col_cyan */
static const char *colors[][3]      = {
	/*               fg         bg         border   */ /* где будет применяться цвет, передний план, задний, рамка */
	[SchemeNorm] = { col_gray2, col_gray1, col_gray2 },
	[SchemeSel]  = { col_cyan, col_gray1,  col_cyan  },
};


/* названия тегов на панели, можно спокойно юзать font awesome */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };


/* правила запуска приложений, узнать класс окна xprop | grep WM_CLASS */
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */ /* тут сам разберешься, примеры ниже */
	{ "firefox",          NULL,       NULL,       1 << 0,       0,           -1 },
	{ "TelegramDesktop",  NULL,       NULL,       1 << 0,       0,           -1 },
	{ "Blender",          NULL,       NULL,       1 << 1,       0,           -1 },
	{ "Inkscape",         NULL,       NULL,       1 << 2,       0,           -1 },
	{ "Lutris",           NULL,       NULL,       1 << 8,       0,           -1 },
};


/* layout(s) */
static const float mfact     = 0.55; /* размер мастер-окна по дефолту [0.05..0.95] */
static const int nmaster     = 1;    /* количество приложений в мастер-зоне */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals яхз */
static const int lockfullscreen = 1; /* 1 принудительная фокусировка на полноэкранном окне */

static const Layout layouts[] = {
	/* symbol     arrange function */ /* обзначения для каждого из режимов */
	{ "[]=",      tile },    /* тайлинг */
	{ "><>",      NULL },    /* флоат */
	{ "[M]",      monocle }, /* монокль */
};


/* key definitions */
#define MODKEY Mod4Mask /* клавиша модификатор, по дефолту alt, если поставить 4 то будет windows */
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },


/* helper for spawning shell commands in the pre dwm-5.0 fashion */ /* какая то хрень для старых версий */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */ /* тут можно прописать свои комманды */
static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray2, "-sb", col_cyan, "-sf", col_gray4, NULL };

/* тут устанавливается эмулятор терминала по дефолту */
static const char *termcmd[]  = { "alacritty", NULL };

/* static const char *имя_команды[] = { "команда", "фргумент", NULL }; */
static const char *blender[] =   { "blender", NULL };
static const char *inkscape[] =  { "inkscape", NULL };
static const char *lutris[] =     { "lutris", NULL };
static const char *nemo[] =      { "nemo", NULL };

static const char *volm[] = { "amixer", "-D", "pulse", "sset", "Master", "10%-", NULL };
static const char *volp[] = { "amixer", "-D", "pulse", "sset", "Master", "10%+", NULL };
static const char *scrot[] = { "scrot", NULL };
static const char *reboot[] =    { "reboot", NULL };
static const char *poweroff[] =  { "poweroff", NULL };


/* настройки горячих клавиш */
static const Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_d,      spawn,          {.v = dmenucmd } }, /* запуск dmenu */
	{ MODKEY,						XK_Return, spawn,          {.v = termcmd } }, /* запуск терминала */
	{ MODKEY|ControlMask,           XK_b,      togglebar,      {0} }, /* скрыть бар */
	{ MODKEY,                       XK_Right,  focusstack,     {.i = +1 } }, /* переключить фокус вправо */
	{ MODKEY,                       XK_Left,   focusstack,     {.i = -1 } }, /* переключить фокус влево */
	{ MODKEY|ControlMask,           XK_i,      incnmaster,     {.i = +1 } }, /* переключить в горизонтальный режим просмотра */
	{ MODKEY|ControlMask,           XK_p,      incnmaster,     {.i = -1 } }, /* переключить в вертикальный режим просмотра */
	{ MODKEY|ControlMask,           XK_Right,  setmfact,       {.f = -0.05} }, /* уменьшить размер оприложения на 0,05 */
	{ MODKEY|ControlMask,           XK_Left,   setmfact,       {.f = +0.05} }, /* увиличить размер оприложения на 0,05 */
	{ MODKEY|ShiftMask,             XK_Return, zoom,           {0} }, /* сделать мастер окном */
	{ MODKEY,                       XK_Tab,    view,           {0} }, /* переключение между двумя последними использованными воркспэйсами */
	{ MODKEY,                       XK_c,      killclient,     {0} }, /* убить приложение */
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} }, /* в режим тайлинга */
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} }, /* в плавающей рижим */
	{ MODKEY|ControlMask,           XK_m,      setlayout,      {.v = &layouts[2]} }, /* в режим монокля */
	{ MODKEY,                       XK_space,  setlayout,      {0} }, /* переключиться из тайлинга во флоат */
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} }, /* сделать окно плавающим */
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } }, /* собрать все приложения на одном воркспэйсе */
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } }, /* открыть приложение на всех воркспэйсах */
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } }, /* запятая, яхз */
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } }, /* точка, яхз */
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } }, /* запятая, яхз */
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } }, /* точка, яхз */
	TAGKEYS(                        XK_1,                      0) /* переход на 1 воркспэйс */
	TAGKEYS(                        XK_2,                      1) /* переход на 2 воркспэйс */
	TAGKEYS(                        XK_3,                      2) /* переход на 3 воркспэйс */
	TAGKEYS(                        XK_4,                      3) /* переход на 4 воркспэйс */
	TAGKEYS(                        XK_5,                      4) /* переход на 5 воркспэйс */
	TAGKEYS(                        XK_6,                      5) /* переход на 6 воркспэйс */
	TAGKEYS(                        XK_7,                      6) /* переход на 7 воркспэйс */
	TAGKEYS(                        XK_8,                      7) /* переход на 8 воркспэйс */
	TAGKEYS(                        XK_9,                      8) /* переход на 9 воркспэйс */
	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} }, /* выход из dwm */

	{ MODKEY,                       XK_b,      spawn,          {.v = blender } }, /* запуск blender */
	{ MODKEY,                       XK_i,      spawn,          {.v = inkscape } }, /* запуск inkscape */
	{ MODKEY,                       XK_l,      spawn,          {.v = lutris } }, /* запуск steam */
	{ MODKEY,                       XK_n,      spawn,          {.v = nemo } }, /* запуск telegram */

	{ MODKEY|ControlMask,           XK_minus,  setgaps,        {.i = -1 } },
	{ MODKEY|ControlMask,           XK_equal,  setgaps,        {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_equal,  setgaps,        {.i = 0  } },

    { MODKEY,                       XK_equal,   spawn,          {.v=volp } }, /* прибавить громкость */
    { MODKEY,                       XK_minus,  spawn,          {.v=volm } }, /* убавить громкость */
	{ MODKEY,                       XK_Print,  spawn,          {.v=scrot } }, /* скриншоты */
	{ MODKEY|ControlMask,           XK_r,      spawn,          {.v = reboot } }, /* ребут */
	{ MODKEY|ControlMask,           XK_p,      spawn,          {.v = poweroff } }, /* выключение */

};


/* настройки кнопок мыши */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} }, /* выбрать приложение */
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} }, /* переместить прилжение */
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} }, /* сделать приложение плавающим */
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} }, /* изменение размеров приложения */
	{ ClkTagBar,            0,              Button1,        view,           {0} }, /* перейти на воркспэйс */
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },  /* объединить воркспэйсы в один */
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} }, /* перенести приложение на воркспэйс */
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} }, /* продублировать приложение на воркспэйс */
};

