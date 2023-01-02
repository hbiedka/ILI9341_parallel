#include "ILI9341.h"


void setup() {
  // put your setup code here, to run once:
  LCD_init();  
  LCD_clear(0xFF);

  EBU_color_bar_test();

}

void loop() {
  // put your main code here, to run repeatedly:

}

void EBU_color_bar_test() {

  float ratio = 0.75;

  uint16_t r = RED *ratio;
  uint16_t g = GREEN *ratio;
  uint16_t b = BLUE *ratio;
  
  draw_rect(0,0,40,240,r|g|b); // white
  draw_rect(40,0,40,240,r|g); // yellow
  draw_rect(80,0,40,240,g|b); // cyan
  draw_rect(120,0,40,240,g); // green
  draw_rect(160,0,40,240,r|b); // magenta
  draw_rect(200,0,40,240,r); // red
  draw_rect(240,0,40,240,b); // blue
  draw_rect(280,0,40,240,0x0000); // black
  
}