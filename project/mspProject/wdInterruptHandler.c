#include <msp430.h>
#include "switches.h"
#include "dim.h"
#include "led.h"
void __interrupt_vec(PORT2_VECTOR) Port_2(){
  if(P2IFG & SWITCHES) {//For Switches
    P2IFG &= ~SWITCHES;
    switch_interrupt_handler();   
  }
}

void __interrupt_vec(WDT_VECTOR) WDT(){
  static char count = 0;//For Dim Lights
  if(++count == 100) {
    sm_fast_clock();
    count = 0;
  }
  sm_slow_clock();
  sm_update_led();
  led_update();
}

