#include "./lvgl/lvgl.h"
#include "main.h"

int main(int argc, char **argv)
{
  lv_tick_inc(10);
  lv_init();

  return 0;
}

void create_screen_buffer(void)
{
  static lv_disp_draw_buf_t draw_buffer;
  static lv_color_t buf1[D_HORIZONTAL_RES * D_VERTICAL_RES / 10];
  lv_disp_draw_buf_init(&draw_buffer, buf1, NULL, D_HORIZONTAL_RES * D_VERTICAL_RES / 10);
}

void copy_rendered_image(lv_disp_draw_buf_t draw_buffer)
{
  static lv_disp_drv_t display_driver;
  lv_disp_drv_init(&display_driver);
  display_driver.flush_cb = my_disp_flush;
  display_driver.draw_buf = &draw_buffer;
  display_driver.hor_res = D_HORIZONTAL_RES;
  display_driver.ver_res = D_VERTICAL_RES;
  lv_disp_drv_register(&display_driver);

  void my_disp_flush(lv_disp_drv_t * disp, const lv_area_t *area, lv_color_t *color_p)
  {
    int32_t x, y;
    for (y = area->y1; y <= area->y2; y++)
    {
      for (x = area->x1; x <= area->x2; x++)
      {
        set_pixel(x, y, *color_p);
        color_p++;
      }
    }
    lv_disp_flush_ready(disp); /* Indicate you are ready with the flushing*/
  }
}
