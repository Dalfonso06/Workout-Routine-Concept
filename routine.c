#include "routine.h"

void displayRoutine(routine* r) {
	for (int i = 0; i < 7; i++) {
		printf("%c\t", r->week[i]);
	}
	printf("\n");
}

routine createRoutine() {
	routine myRout;
	myRout.week[0] = 'M';
	myRout.week[1] = 'T';
	myRout.week[2] = 'W';
	myRout.week[3] = 'T';
	myRout.week[4] = 'F';
	myRout.week[5] = 'S';
	myRout.week[6] = 'S';
	return myRout;
}