	.text
jt:
	.word 	jump0		;
	.word 	jump1		;
	.word 	jump2		;
	.word 	jump3		;
	.global advance_state
advance_state:
	MOV.B 	#1, &inState	;inState = 1
	CALL 	#led_update	;led_update()
	CMP 	#4, &state
	JNC 	default

	MOV 	&state, R12	;switch(state)
	ADD 	R12, R12	;Jump properly
	MOV 	jt(r12), R0
	
option0:
	MOV.B 	#-66, &P1OUT	;R12 = P1OUT
	MOV.B 	#1, &state	;state = 1;
	JMP end			;break;
option1:
	MOV.B 	&64, &P1OUT	;R12 = P1OUT
	MOV.B	#2, &state	;state = 2;
	JMP end			;break;
option2:
	BIS.B	#1, &P1OUT	;R12 |= LED_RED;
	AND.B	#64, &P1OUT	;R12 &= LED_GREEN;
	MOV.B	#3, &state	;state = 3;
	JMP end			;break;
option3:
	MOV.B 	#65, &P1OUT	;R12 = P1OUT
	MOV.B	#0, &state	;state = 0;
	JUMP end
end:
	ADD #4, &state		;End of Switch
	RET			;return
