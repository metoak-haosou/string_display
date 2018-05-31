#ifndef  __STRING_DISPLAY_INCLUDE__
#define  __STRING_DISPLAY_INCLUDE__

#include "song_8x16.h"
#include "song_16x32.h"

static const char *FONT_8X16 = (const char *)song_8x16;
static const short *FONT_16X32 = (const short *)song_16x32;

typedef unsigned short pixel_t;

struct  img {
    pixel_t *store_area;
    int height;
    int width;
    int display_x_start;
    int display_x_end;
    int display_y_start;
    int display_y_end;
};

int print_char_to_buf_8x16(struct img *imgP,char ch,int start_x,int start_y);
int print_string_to_buf_8x16(struct img *imgP,char *str,int start_x,int start_y);
int display(struct img *imgP);

#endif // ! __STRING_DISPLAY_INCLUDE__

