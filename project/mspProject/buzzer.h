#ifndef buzzer_included
#define buzzer_included

void buzzer_init();
void buzzer_set_period(short cycles);

void playSong0();
void playSong1();
void playSong2();
void playSong3();

void play(long note, long tempo);

#define WHOLE_NOTE 2240000
#define HALFDOT_NOTE 1680000
#define HALF_NOTE 1120000
#define QUARTERDOT_NOTE 840000
#define QUARTER_NOTE 560000
#define EIGHTHDOT_NOTE 420000
#define EIGHTH_NOTE 280000
#define SIXTEENTH_NOTE 140000 
#define THIRTY_SECOND_NOTE 70000

#define WHOLE_REST 2240000
#define HALFDOT_REST 1680000
#define HALF_REST 1120000
#define QUARTERDOT_REST 840000
#define QUARTER_REST 560000
#define EIGHTHDOT_REST 420000
#define EIGHTH_REST 280000
#define SIXTEENTH_REST 140000
#define THIRTY_SECOND_REST 70000

#define C0 16
#define C0_SHARP 17
#define D0 18
#define D0_SHARP 19 
#define E0 21
#define F0 22
#define F0_SHARP 23 
#define G0 24
#define G0_SHARP 25
#define A0 28
#define A0_SHARP 29
#define B0 21

#define C1 33
#define C1_SHARP 35
#define D1 37
#define D1_SHARP 39
#define E1 41
#define F1 44
#define F1_SHARP 46 
#define G1 49
#define G1_SHARP 52
#define A1 110
#define A1_SHARP 58 
#define B1 62

#define C2 65
#define C2_SHARP 69
#define D2 73
#define D2_SHARP 78
#define E2 82
#define F2 87
#define F2_SHARP 92
#define G2 98
#define G2_SHARP 103
#define A2 110
#define A2_SHARP 116
#define B2 123

#define C3 130
#define C3_SHARP 139
#define D3 146
#define D3_SHARP 155
#define E3 164
#define F3 174
#define F3_SHARP 185
#define G3 196
#define G3_SHARP 207
#define A3 220
#define A3_SHARP 233
#define B3 247

#define C4 262
#define C4_SHARP 277
#define D4 294
#define D4_SHARP 311 
#define E4 330
#define F4 349
#define F4_SHARP 370 
#define G4 392
#define G4_SHARP 415
#define A4 440
#define A4_SHARP 466
#define B4 494

#define C5 523
#define C5_SHARP 554
#define D5 587
#define D5_SHARP 622
#define E5 659
#define F5 699
#define F5_SHARP 739 
#define G5 784
#define G5_SHARP 830
#define A5 880
#define A5_SHARP 932 
#define B5 988

#define C6 2047
#define C6_SHARP 2108
#define D6 2175
#define D6_SHARP 2245
#define E6 2319
#define F6 2397
#define F6_SHARP 2480
#define G6 2568
#define G6_SHARP 2661
#define A6 2760
#define A6_SHARP 2864
#define B6 2972

#define C7 3093
#define C7_SHARP 3217
#define D7 3349
#define D7_SHARP 3489
#define E7 3637
#define F7 3794
#define F7_SHARP 4960
#define G7 4136
#define G7_SHARP 4322
#define A7 4520
#define A7_SHARP 4729
#define B7 4951

#define C8 5186
#define C8_SHARP 5434
#define D8 5699
#define D8_SHARP 5978
#define E8 6274
#define F8 6587
#define F8_SHARP 6919
#define G8 7271
#define G8_SHARP 7655
#define A8 8040
#define A8_SHARP 8459
#define B8 8902

#endif
