
all: routine

routine: main.o routine.o
	gcc main.o routine.o -o routine

main.o: main.c
	gcc -c main.c

routine.o: routine.c routine.h
	gcc -c routine.c

clean:
	rm -f routine *.o core *~