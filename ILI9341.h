#include <Arduino.h>

#define LCD_RST A4
#define LCD_CS A3
#define LCD_RS A2
#define LCD_WR A1
#define LCD_RD A0

#define LCD_WIDTH 320
#define LCD_HEIGHT 240

#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
#define ORANGE  0xFE29


void LCD_write(uint8_t d);
void LCD_command_write(uint8_t d);
void LCD_data_write(uint8_t d);
void LCD_clear(byte color);
void LCD_init(void);

void draw_rect(uint16_t col,uint16_t row, uint16_t width, uint16_t height, uint16_t color);