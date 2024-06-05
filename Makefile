CC := gcc
CFLAGS := -Wall -Wextra
ALL_OBJS := main.o hardware.o
EXECUTABLE_NAME := prog

all: ${ALL_OBJS}
	${CC} -o ${EXECUTABLE_NAME} ${ALL_OBJS} ${CFLAGS}


main.o: main.c hardware.h
	${CC} -c main.c ${CFLAGS}

myGPIO.o: hardware.c hardware.h
	${CC} -c hardware.c ${CFLAGS}
clean:
	rm ${EXECUTABLE_NAME} ${ALL_OBJS}