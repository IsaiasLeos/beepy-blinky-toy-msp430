# makfile configuration
COMMON_OBJECTS  =
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all: blink.elf
	(cd ../timerLib; make)
#additional rules for files
blink.elf: ${COMMON_OBJECTS} projectMain.c stateMachine.o led.o wdInterruptHandler.o switches.o buzzer.o dim.o ../timerLib/libTimer.a
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: blink.elf
	mspdebug rf2500 "prog blink.elf"

clean:
	rm -f -r *.o *.elf *shell* *shell*~ *~
	(cd ../timerLib; make clean)
dim.o: dim.h dim.c
stateMachine.o: stateMachine.c stateMachine.h
led.o: led.c led.h
switches.o: switches.c switches.h
buzzer.o: buzzer.c buzzer.h
wdInterruptHandler.o: wdInterruptHandler.c
