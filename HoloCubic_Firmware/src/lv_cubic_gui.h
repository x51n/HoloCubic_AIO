#ifndef LV_CUBIC_GUI_H
#define LV_CUBIC_GUI_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "lvgl.h"

#define APP_NUM 5
	//extern lv_img_dsc_t screen_buffer;

    extern lv_obj_t *app_scr[APP_NUM];
    extern lv_obj_t *app_image[APP_NUM];
	extern lv_obj_t *wc_scr[4];
	extern lv_obj_t *image;

	void display_init(void);
	void display_photo(const char *file_name);
	void display_weather(const char *cityname, const char * temperature, int weathercode);
	void display_time(const char *date, const char *time);
	void display_hardware(const char *info);
	void display_setting(const char *info, const char *ap_ip, const char *domain, const char *title);
    void display_app_scr(int index);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
