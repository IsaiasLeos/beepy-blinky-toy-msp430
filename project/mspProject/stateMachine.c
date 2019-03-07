#include <msp430.h>
#include "stateMachine.h"
#include "led.h"

void advance_state(){
  inState = 1;
  led_update();//maybe before maybe after
  switch(state){
  case 0://Change lights every method call
    P1OUT &= ~LEDS;//Turn off
    state = 1;
    break;
  case 1:
    P1OUT |= LED_GREEN;//Set to green
    state = 2;
    break;
  case 2:
    P1OUT |= LED_RED;//Set to red
    P1OUT &= ~LED_GREEN;//Turn off 
    state = 3;
    break;
  case 3:
    P1OUT |= LEDS;//Set to red & green
    state = 0;
    break;
  }
}
