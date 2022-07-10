#include "routine.h"

void displayRoutine(routine* r) {
	for (int i = 0; i < 7; i++) {
		printf("%d\t", r->week[i]);
	}
	printf("\n");
}

routine createRoutine() {
	routine r;
	for (int i = 0; i < 7; i++) {
		r.week[i] = i+1;
	}

	return r;
}

category createCat(char* cat) {
	category c;
	c.name = cat;

	return c;
}

void printCat(category* cat) {
	printf("%s\n", cat->name);
}