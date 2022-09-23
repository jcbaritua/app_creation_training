#include "lvgl.h"
#include "header_component.h"

void create_header(void)
{

  /*------ MAIN CONTAINER ------*/
  lv_obj_t *header_container;
  header_container = lv_obj_create(lv_scr_act());
  lv_obj_set_size(header_container, 480, 38);
  lv_obj_align(header_container, LV_ALIGN_TOP_LEFT, 0, 0);
  lv_obj_set_scrollbar_mode(header_container, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t header_style;
  lv_style_init(&header_style);
  lv_style_set_bg_color(&header_style, lv_color_black());
  lv_style_set_radius(&header_style, 0);
  lv_style_set_border_color(&header_style, lv_color_black());
  lv_style_set_pad_all(&header_style, 0);
  lv_obj_add_style(header_container, &header_style, 0);
  /*------ MAIN CONTAINER ------*/

  /*------ HOME BUTTON ------*/
  lv_obj_t *home_button;
  home_button = lv_obj_create(header_container);
  lv_obj_set_size(home_button, 35, 35);
  lv_obj_align_to(home_button, header_container, LV_ALIGN_TOP_LEFT, 0, 0);
  lv_obj_set_scrollbar_mode(home_button, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t home_button_style;
  lv_style_init(&home_button_style);
  lv_style_set_bg_color(&home_button_style, lv_color_white());
  lv_style_set_border_color(&home_button_style, lv_color_black());
  lv_style_set_radius(&home_button_style, 1);
  lv_obj_add_style(home_button, &home_button_style, 0);
  /*------ HOME BUTTON ------*/

  /*------ IMAGES ------*/
  LV_IMG_DECLARE(home_logo);
  lv_obj_t *home = lv_img_create(home_button);
  lv_img_set_src(home, &home_logo);
  lv_obj_align_to(home, home_button, LV_ALIGN_CENTER, 5, 5);
  lv_obj_set_size(home, 20, 20);

  /*------ IMAGES ------*/

  /*------ UPPER RIGHTMOST LABEL ------*/
  lv_obj_t *right_label;
  right_label = lv_obj_create(header_container);
  lv_obj_align_to(right_label, header_container, LV_ALIGN_TOP_RIGHT, 50, 0);
  lv_obj_set_size(right_label, 80, 35);
  lv_obj_set_scrollbar_mode(right_label, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t right_label_style;
  lv_style_init(&right_label_style);
  lv_style_set_bg_color(&right_label_style, lv_color_white());
  lv_style_set_border_color(&right_label_style, lv_color_black());
  lv_style_set_radius(&right_label_style, 1);
  lv_obj_add_style(right_label, &right_label_style, 0);
  /*------ UPPER RIGHTMOST LABEL ------*/

  /*------ UPPER RIGHT ICONS ------*/
  lv_obj_t *right_icons;
  right_icons = lv_obj_create(header_container);
  lv_obj_align_to(right_icons, header_container, LV_ALIGN_TOP_RIGHT, -2, 0);
  lv_obj_set_size(right_icons, 53, 36);
  lv_obj_set_scrollbar_mode(right_icons, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t right_icon_style;
  lv_style_init(&right_icon_style);
  lv_style_set_bg_color(&right_icon_style, lv_color_black());
  lv_style_set_border_color(&right_icon_style, lv_color_black());
  lv_style_set_radius(&right_icon_style, 0);
  lv_obj_add_style(right_icons, &right_icon_style, 0);

  /*------ Individual Icons ------*/
  lv_obj_t *icon1;
  icon1 = lv_obj_create(right_icons);
  lv_obj_align_to(icon1, right_icons, LV_ALIGN_TOP_LEFT, -16, -16);
  lv_obj_set_size(icon1, 14, 14);
  lv_obj_set_scrollbar_mode(icon1, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t icon1_style;
  lv_style_init(&icon1_style);
  lv_style_set_bg_color(&icon1_style, lv_color_white());
  lv_style_set_border_color(&icon1_style, lv_color_white());
  lv_style_set_radius(&icon1_style, 1);
  lv_obj_add_style(icon1, &icon1_style, 0);

  lv_obj_t *icon2;
  icon2 = lv_obj_create(right_icons);
  lv_obj_align_to(icon2, right_icons, LV_ALIGN_TOP_LEFT, -16, 1);
  lv_obj_set_size(icon2, 14, 14);
  lv_obj_set_scrollbar_mode(icon2, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t icon2_style;
  lv_style_init(&icon2_style);
  lv_style_set_bg_color(&icon2_style, lv_color_white());
  lv_style_set_border_color(&icon2_style, lv_color_white());
  lv_style_set_radius(&icon2_style, 1);
  lv_obj_add_style(icon2, &icon2_style, 0);

  lv_obj_t *icon3;
  icon3 = lv_obj_create(right_icons);
  lv_obj_align_to(icon3, right_icons, LV_ALIGN_TOP_LEFT, 1, -16);
  lv_obj_set_size(icon3, 14, 14);
  lv_obj_set_scrollbar_mode(icon3, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t icon3_style;
  lv_style_init(&icon3_style);
  lv_style_set_bg_color(&icon3_style, lv_color_white());
  lv_style_set_border_color(&icon3_style, lv_color_white());
  lv_style_set_radius(&icon3_style, 1);
  lv_obj_add_style(icon3, &icon3_style, 0);

  lv_obj_t *icon4;
  icon4 = lv_obj_create(right_icons);
  lv_obj_align_to(icon4, right_icons, LV_ALIGN_TOP_LEFT, 1, 1);
  lv_obj_set_size(icon4, 14, 14);
  lv_obj_set_scrollbar_mode(icon4, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t icon4_style;
  lv_style_init(&icon4_style);
  lv_style_set_bg_color(&icon4_style, lv_color_white());
  lv_style_set_border_color(&icon4_style, lv_color_white());
  lv_style_set_radius(&icon4_style, 1);
  lv_obj_add_style(icon4, &icon4_style, 0);

  lv_obj_t *icon5;
  icon5 = lv_obj_create(right_icons);
  lv_obj_align_to(icon5, right_icons, LV_ALIGN_TOP_LEFT, 18, -16);
  lv_obj_set_size(icon5, 14, 14);
  lv_obj_set_scrollbar_mode(icon5, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t icon5_style;
  lv_style_init(&icon5_style);
  lv_style_set_bg_color(&icon5_style, lv_color_white());
  lv_style_set_border_color(&icon5_style, lv_color_white());
  lv_style_set_radius(&icon5_style, 1);
  lv_obj_add_style(icon5, &icon5_style, 0);

  lv_obj_t *icon6;
  icon6 = lv_obj_create(right_icons);
  lv_obj_align_to(icon6, right_icons, LV_ALIGN_TOP_LEFT, 18, 1);
  lv_obj_set_size(icon6, 14, 14);
  lv_obj_set_scrollbar_mode(icon6, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t icon6_style;
  lv_style_init(&icon6_style);
  lv_style_set_bg_color(&icon6_style, lv_color_white());
  lv_style_set_border_color(&icon6_style, lv_color_white());
  lv_style_set_radius(&icon6_style, 1);
  lv_obj_add_style(icon6, &icon6_style, 0);
  /*------ UPPER RIGHT ICONS ------*/
}
