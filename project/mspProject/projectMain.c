#include <msp430.h>
#include "../timerLib/libTimer.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"
//#include <lcdutils.h>
//#include <lcddraw.h>
//#include <p2switches.h>

void main (void){
  configureClocks();
  switch_init();
  buzzer_init();
  led_init();
  //lcd_init();
  //p2sw_init(15);
  enableWDTInterrupts();
  or_sr(0x18);
  //u_char width = screenWidth, height = screenHeight;
  //clearScreen(COLOR_BLACK);
}

/* Initializes everything, clears the screen, draws "hello" and the circle
void main()
{
  configureClocks();
  lcd_init();
  p2sw_init(15);
  or_sr(0x8);
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);

  drawString5x7(10,10, "switches:", COLOR_GREEN, COLOR_BLUE);
  while (1) {
    u_int switches = p2sw_read(), i;
    char str[5];
    for (i = 0; i < 4; i++)
      str[i] = (switches & (1<<i)) ? '-' : '0'+i;
    str[4] = 0;
    drawString5x7(20,20, str, COLOR_GREEN, COLOR_BLUE);
  } 
}
*/
