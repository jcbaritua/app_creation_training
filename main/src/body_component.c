#include "lvgl.h"
#include "body_component.h"

void create_body(void)
{
  lv_obj_t *body_container;
  body_container = lv_obj_create(lv_scr_act());
  lv_obj_set_size(body_container, 480, 182);
  lv_obj_align(body_container, LV_ALIGN_TOP_LEFT, 0, 39);
  lv_obj_set_scrollbar_mode(body_container, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t body_style;
  lv_style_init(&body_style);
  lv_style_set_radius(&body_style, 0);
  lv_style_set_bg_color(&body_style, lv_color_white());
  lv_style_set_border_color(&body_style, lv_color_white());
  lv_obj_add_style(body_container, &body_style, 0);

  lv_obj_t *copy_button = lv_obj_create(body_container);
  lv_obj_set_size(copy_button, 95, 95);
  lv_obj_align_to(copy_button, body_container, LV_ALIGN_CENTER, -172, -20);
  lv_obj_set_scrollbar_mode(copy_button, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t copy_button_style;
  lv_style_init(&copy_button_style);
  lv_style_set_bg_color(&copy_button_style, lv_palette_main(LV_PALETTE_GREY));
  lv_style_set_border_color(&copy_button_style, lv_palette_main(LV_PALETTE_GREY));
  lv_obj_add_style(copy_button, &copy_button_style, 0);

  lv_obj_t *button2 = lv_obj_create(body_container);
  lv_obj_set_size(button2, 95, 95);
  lv_obj_align_to(button2, body_container, LV_ALIGN_CENTER, -57, -20);
  lv_obj_set_scrollbar_mode(button2, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t button2_style;
  lv_style_init(&button2_style);
  lv_style_set_bg_color(&button2_style, lv_palette_main(LV_PALETTE_GREY));
  lv_style_set_border_color(&button2_style, lv_palette_main(LV_PALETTE_GREY));
  lv_obj_add_style(button2, &button2_style, 0);

  lv_obj_t *button3 = lv_obj_create(body_container);
  lv_obj_set_size(button3, 95, 95);
  lv_obj_align_to(button3, body_container, LV_ALIGN_CENTER, 57, -20);
  lv_obj_set_scrollbar_mode(button3, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t button3_style;
  lv_style_init(&button3_style);
  lv_style_set_bg_color(&button3_style, lv_palette_main(LV_PALETTE_GREY));
  lv_style_set_border_color(&button3_style, lv_palette_main(LV_PALETTE_GREY));
  lv_obj_add_style(button3, &button3_style, 0);

  lv_obj_t *button4 = lv_obj_create(body_container);
  lv_obj_set_size(button4, 95, 95);
  lv_obj_align_to(button4, body_container, LV_ALIGN_CENTER, 172, -20);
  lv_obj_set_scrollbar_mode(button4, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t button4_style;
  lv_style_init(&button4_style);
  lv_style_set_bg_color(&button4_style, lv_palette_main(LV_PALETTE_GREY));
  lv_style_set_border_color(&button4_style, lv_palette_main(LV_PALETTE_GREY));
  lv_obj_add_style(button4, &button4_style, 0);

  lv_obj_t *label1 = lv_label_create(body_container);
  lv_label_set_text(label1, "COPY");
  lv_obj_set_width(label1, 95);
  lv_obj_set_style_text_align(label1, LV_TEXT_ALIGN_CENTER, 0);
  lv_obj_align_to(label1, body_container, LV_ALIGN_CENTER, -172, 40);

  lv_obj_t *label2 = lv_label_create(body_container);
  lv_label_set_text(label2, "FAX");
  lv_obj_set_width(label2, 95);
  lv_obj_set_style_text_align(label2, LV_TEXT_ALIGN_CENTER, 0);
  lv_obj_align_to(label2, body_container, LV_ALIGN_CENTER, -57, 40);

  lv_obj_t *label3 = lv_label_create(body_container);
  lv_label_set_text(label3, "SCAN");
  lv_obj_set_width(label3, 95);
  lv_obj_set_style_text_align(label3, LV_TEXT_ALIGN_CENTER, 0);
  lv_obj_align_to(label3, body_container, LV_ALIGN_CENTER, 57, 40);

  lv_obj_t *label4 = lv_label_create(body_container);
  lv_label_set_text(label4, "PROGRAM");
  lv_obj_set_width(label4, 95);
  lv_obj_set_style_text_align(label4, LV_TEXT_ALIGN_CENTER, 0);
  lv_obj_align_to(label4, body_container, LV_ALIGN_CENTER, 172, 40);

  lv_obj_t *button1_logo = lv_obj_create(copy_button);
  lv_obj_set_size(button1_logo, 70, 70);
  lv_obj_align_to(button1_logo, copy_button, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_scrollbar_mode(button1_logo, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t button1_logo_style;
  lv_style_init(&button1_logo_style);
  lv_style_set_bg_color(&button1_logo_style, lv_palette_main(LV_PALETTE_GREEN));
  lv_style_set_border_color(&button1_logo_style, lv_palette_main(LV_PALETTE_GREEN));
  lv_style_set_radius(&button1_logo_style, 0);
  lv_style_set_pad_all(&button1_logo_style, 0);
  lv_obj_add_style(button1_logo, &button1_logo_style, 0);

  lv_obj_t *button2_logo = lv_obj_create(button2);
  lv_obj_set_size(button2_logo, 70, 70);
  lv_obj_align_to(button2_logo, button2, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_scrollbar_mode(button2_logo, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t button2_logo_style;
  lv_style_init(&button2_logo_style);
  lv_style_set_bg_color(&button2_logo_style, lv_palette_main(LV_PALETTE_LIGHT_BLUE));
  lv_style_set_border_color(&button2_logo_style, lv_palette_main(LV_PALETTE_LIGHT_BLUE));
  lv_style_set_radius(&button2_logo_style, 0);
  lv_style_set_pad_all(&button2_logo_style, 0);
  lv_obj_add_style(button2_logo, &button2_logo_style, 0);

  lv_obj_t *button3_logo = lv_obj_create(button3);
  lv_obj_set_size(button3_logo, 70, 70);
  lv_obj_align_to(button3_logo, button3, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_scrollbar_mode(button3_logo, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t button3_logo_style;
  lv_style_init(&button3_logo_style);
  lv_style_set_bg_color(&button3_logo_style, lv_palette_main(LV_PALETTE_DEEP_ORANGE));
  lv_style_set_border_color(&button3_logo_style, lv_palette_main(LV_PALETTE_DEEP_ORANGE));
  lv_style_set_radius(&button3_logo_style, 0);
  lv_style_set_pad_all(&button3_logo_style, 0);
  lv_obj_add_style(button3_logo, &button3_logo_style, 0);

  lv_obj_t *button4_logo = lv_obj_create(button4);
  lv_obj_set_size(button4_logo, 70, 70);
  lv_obj_align_to(button4_logo, button4, LV_ALIGN_CENTER, 0, 0);
  lv_obj_set_scrollbar_mode(button4_logo, LV_SCROLLBAR_MODE_OFF);

  static lv_style_t button4_logo_style;
  lv_style_init(&button4_logo_style);
  lv_style_set_bg_color(&button4_logo_style, lv_palette_main(LV_PALETTE_GREY));
  lv_style_set_border_color(&button4_logo_style, lv_palette_main(LV_PALETTE_GREY));
  lv_style_set_radius(&button4_logo_style, 0);
  lv_obj_add_style(button4_logo, &button4_logo_style, 0);

  lv_obj_t *copy_image = lv_imgbtn_create(button1_logo);
  lv_imgbtn_set_src(copy_image, LV_IMGBTN_STATE_RELEASED, NULL, &copy_logo, NULL);
  lv_imgbtn_set_src(copy_image, LV_IMGBTN_STATE_PRESSED, NULL, &copy_logo, NULL);
  lv_obj_set_width(copy_image, 60);
  lv_obj_set_height(copy_image, 60);
  lv_obj_align_to(copy_image, button1_logo, LV_ALIGN_CENTER, 0, 0);

  lv_obj_t *fax_image = lv_imgbtn_create(button2_logo);
  lv_imgbtn_set_src(fax_image, LV_IMGBTN_STATE_RELEASED, NULL, &fax_logo, NULL);
  lv_imgbtn_set_src(fax_image, LV_IMGBTN_STATE_PRESSED, NULL, &fax_logo, NULL);
  lv_obj_set_width(fax_image, 60);
  lv_obj_set_height(fax_image, 60);
  lv_obj_align_to(fax_image, button2_logo, LV_ALIGN_CENTER, 0, 0);

  lv_obj_t *scan_image = lv_imgbtn_create(button3_logo);
  lv_imgbtn_set_src(scan_image, LV_IMGBTN_STATE_RELEASED, NULL, &scanner_logo, NULL);
  lv_imgbtn_set_src(scan_image, LV_IMGBTN_STATE_PRESSED, NULL, &scanner_logo, NULL);
  lv_obj_set_width(scan_image, 60);
  lv_obj_set_height(scan_image, 60);
  lv_obj_align_to(scan_image, button3_logo, LV_ALIGN_CENTER, 0, 0);
}