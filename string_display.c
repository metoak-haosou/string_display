#include "string_display.h"
#include <string.h>

/**
 * 在给定空间上放上一个字符 8x16    
*/
int print_char_to_buf_8x16(struct img *imgP,char ch,int start_x,int start_y)
{   
    int ret;
    int char_x,char_y;
    int offset = start_x +start_y*imgP->width;
    const char *ch_img = FONT_8X16+16*ch;
    for(char_y=0;char_y<16;char_y++){
        for(char_x=0;char_x<8;char_x++){
        }
    }

}
/**
 * 在给定空间上放上字符串 8x16
 */
int print_string_to_buf_8x16(struct img *imgP,char *str,int start_x,int start_y)
{
    int str_length = strlen(str);
    int char_point;
    int x,y;
    int ret = 0;
    for(char_point = 0,x=start_x,y=start_y;char_point < str_length;char_point++){
        ret = print_char_to_buf_8x16(imgP,str[char_point],x,y);
        if(!ret){
            ret = -1;
            goto out;
        }
        x += 8;
    }
out:
    return ret;
}
/**
 * 在屏幕显示图片
 */
int display(struct img *imgP)
{

}
