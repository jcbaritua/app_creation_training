#include "lvgl.h"
#include "footer_component.h"

void create_footer(void)
{
  lv_obj_t *footer_container;
  footer_container = lv_obj_create(lv_scr_act());
  lv_obj_set_size(footer_container, 480, 49);
  lv_obj_align(footer_container, LV_ALIGN_TOP_LEFT, 0, 223);
  lv_obj_set_scrollbar_mode(footer_container, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t footer_style;
  lv_style_init(&footer_style);
  lv_style_set_bg_color(&footer_style, lv_color_black());
  lv_style_set_radius(&footer_style, 0);
  lv_style_set_border_color(&footer_style, lv_color_black());
  lv_style_set_pad_all(&footer_style, 0);
  lv_obj_add_style(footer_container, &footer_style, 0);

  lv_obj_t *ink_levels = lv_obj_create(footer_container);
  lv_obj_set_size(ink_levels, 100, 45);
  lv_obj_align_to(ink_levels, footer_container, LV_ALIGN_TOP_LEFT, 0, 0);
  lv_obj_set_scrollbar_mode(ink_levels, LV_SCROLLBAR_MODE_OFF);

  lv_obj_t *icon_1 = lv_obj_create(footer_container);
  lv_obj_set_size(icon_1, 45, 45);
  lv_obj_align_to(icon_1, footer_container, LV_ALIGN_CENTER, 121, 0);
  lv_obj_set_scrollbar_mode(icon_1, LV_SCROLLBAR_MODE_OFF);

  lv_obj_t *icon_2 = lv_obj_create(footer_container);
  lv_obj_set_size(icon_2, 45, 45);
  lv_obj_align_to(icon_2, footer_container, LV_ALIGN_CENTER, 168, 0);
  lv_obj_set_scrollbar_mode(ink_levels, LV_SCROLLBAR_MODE_OFF);

  lv_obj_t *icon_3 = lv_obj_create(footer_container);
  lv_obj_set_size(icon_3, 45, 45);
  lv_obj_align_to(icon_3, footer_container, LV_ALIGN_CENTER, 215, 0);
  lv_obj_set_scrollbar_mode(icon_3, LV_SCROLLBAR_MODE_OFF);
}