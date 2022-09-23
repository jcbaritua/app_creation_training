#include "lvgl.h"
#include "footer_component.h"

void create_footer(void)
{
  lv_obj_t *footer_container;
  footer_container = lv_obj_create(lv_scr_act());
  lv_obj_set_size(footer_container, 480, 52);
  lv_obj_align(footer_container, LV_ALIGN_TOP_LEFT, 0, 223);
  lv_obj_set_scrollbar_mode(footer_container, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t footer_style;
  lv_style_init(&footer_style);
  lv_style_set_bg_color(&footer_style, lv_color_black());
  lv_style_set_radius(&footer_style, 0);
  lv_style_set_border_color(&footer_style, lv_color_black());
  lv_obj_add_style(footer_container, &footer_style, 0);
}