#include "protheme.h"



ProTheme::ProTheme(/* args */)
{
    col_bg                  = RGB15(8,9,12)|BIT(15);
	col_dark_bg             = col_bg;
	col_medium_bg           = RGB15(24,24,24)|BIT(15);
	col_light_bg            = RGB15(31,31,31)|BIT(15);
	col_lighter_bg          = RGB15(28,28,28) | BIT(15);
	col_light_ctrl          = RGB15(31,31,31)|BIT(15); // RGB15(26,26,26)|BIT(15)
	col_dark_ctrl           = RGB15(23,23,23)|BIT(15); // RGB15(31,31,31)|BIT(15)
	col_light_ctrl_disabled = col_light_bg;
	col_dark_ctrl_disabled  = col_medium_bg;
	col_list_highlight1     = RGB15(20,20,20)|BIT(15); // part of the gradient
	col_list_highlight2     = RGB15(24,24,24)|BIT(15);
	col_outline             = RGB15(15,15,15)|BIT(15);
	col_sepline             = RGB15(14,14,14)|BIT(15);
	col_icon                = RGB15(0,0,0)|BIT(15);
	col_text                = RGB15(0,0,0)|BIT(15);
	col_signal              = RGB15(31,0,0)|BIT(15);
}
