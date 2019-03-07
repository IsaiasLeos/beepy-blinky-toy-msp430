#include <msp430.h>
#include "../timerLib/libTimer.h"
#include "buzzer.h"
#include "switches.h"
#include "stateMachine.h"

void songList();
/* Call before Speaker is used */
void buzzer_init(){
  timerAUpmode();//used to drive speaker
  P2SEL2 &= ~(BIT6 | BIT7);
  P2SEL &= ~BIT7; 
  P2SEL |= BIT6;
  P2DIR = BIT6;//enable output to speaker (P2.6)
}

void play(long sound, long length){
  long count = 0;//how long the sound is
  buzzer_set_period(sound);//play sound
  while(++count < length)
    {
      
    }//play sound for certain time
  count = 0;//reset for next sound
  buzzer_set_period(0);
  //reset sound so note doesn't carry over
}

void playSong0(){
  long tempo = 10500;//SET 10500 FOR GALA NOISE
  //SET 8000 FOR BLASTER NOISE
  play(0, tempo);
  play(G4_SHARP,tempo);
  play(C5_SHARP, tempo);
  play(E5, tempo);
  advance_state();
  play(G5_SHARP, tempo);
  play(C5_SHARP, tempo);
  play(E5, tempo);
  play(G5_SHARP, tempo);
  advance_state();
  play(C6_SHARP, tempo);
  play(E4, tempo);
  play(G4_SHARP, tempo);
  play(C6_SHARP, tempo);
  advance_state();
  play(E6, tempo);
  play(G5_SHARP, tempo);
  play(C6_SHARP, tempo);
  play(E6, tempo);
  advance_state();
  play(G6_SHARP, tempo);
  play(C6_SHARP,tempo);
  play(E6, tempo);
  play(G6_SHARP, tempo);
  advance_state();
  play(C7_SHARP, tempo);
  play(E6, tempo);
  play(G6_SHARP, tempo);
  play(C7_SHARP, tempo);
  advance_state();
  play(E7, tempo);
  play(E6, tempo);
  play(G6_SHARP, tempo);
  play(E7, tempo);
  advance_state();
  play(G6_SHARP, tempo);
  play(0, tempo);
  play(G6_SHARP, tempo);
  play(0, tempo);
  advance_state();
}

void playSong1(){
  long tempo = 10500;
  play(B6, tempo);
  play(B6, tempo);
  play(B6, tempo);
  play(B6, tempo);
  advance_state();
  play(F6, tempo);
  play(F6, tempo);
  play(A6, tempo);
  play(A6, tempo);
  advance_state();
  play(B6, tempo);
  play(B6, tempo);
  play(B6, tempo);
  play(B6, tempo);
  advance_state();
  play(F6, tempo);
  play(F6, tempo);
  play(A6, tempo);
  play(A6, tempo);
  advance_state();
  play(0, tempo);
}

void playSong2(){
  long tempo = 8000;//SET 10500 FOR GALA NOISE
  //SET 8000 FOR BLASTER NOISE
  play(0, tempo);
  play(E4,tempo);
  play(F5_SHARP, tempo);
  play(E3, tempo);
  advance_state();
  play(G4_SHARP, tempo);
  play(C3_SHARP, tempo);
  play(E3, tempo);
  play(G3_SHARP, tempo);
  advance_state();
  play(G2_SHARP, tempo);
  play(G4, tempo);
  play(A4_SHARP, tempo);
  play(A6_SHARP, tempo);
  advance_state();
  play(A5, tempo);
  play(G3_SHARP, tempo);
  play(A3_SHARP, tempo);
  play(E2, tempo);
  advance_state();
  play(D6_SHARP, tempo);
  play(D6_SHARP,tempo);
  play(E5, tempo);
  play(G3_SHARP, tempo);
  advance_state();
  play(C8_SHARP, tempo);
  play(E8, tempo);
  play(G8_SHARP, tempo);
  play(C8_SHARP, tempo);
  advance_state();
  play(E7, tempo);
  play(E6, tempo);
  play(E6, tempo);
  play(E3, tempo);
  advance_state();
  play(B6, tempo);
  play(0, tempo);
  play(B6, tempo);
  play(0, tempo);
  advance_state();
}


void playSong3(){
  long tempo = 7000;
  play(0, tempo);
  play(G1_SHARP,tempo);
  play(C2_SHARP, tempo);
  play(E2, tempo);
  advance_state();
  play(G2_SHARP, tempo);
  play(C2_SHARP, tempo);
  play(E2, tempo);
  play(G2_SHARP, tempo);
  advance_state();
  play(G6_SHARP, tempo);
  play(E2, tempo);
  play(G2_SHARP, tempo);
  play(G6_SHARP, tempo);
  advance_state();
  play(E2, tempo);
  play(G1_SHARP, tempo);
  play(C2_SHARP, tempo);
  play(E2, tempo);
  advance_state();
  play(G2_SHARP, tempo);
  play(C2_SHARP,tempo);
  play(E2, tempo);
  play(G2_SHARP, tempo);
  advance_state();
  play(C3_SHARP, tempo);
  play(E2, tempo);
  play(G2_SHARP, tempo);
  play(C3_SHARP, tempo);
  advance_state();
  play(E2, tempo);
  play(E2, tempo);
  play(G2_SHARP, tempo);
  play(E3, tempo);
  advance_state();
  play(G3_SHARP, tempo);
  play(0, tempo);
  play(G2_SHARP, tempo);
  play(0, tempo);
  advance_state();
}

/* Make a noise on Frequency Given */
void buzzer_set_period(short note){
  CCR0 = note;
  CCR1 = note >> 1;
}
