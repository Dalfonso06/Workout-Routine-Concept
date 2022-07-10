#include <stdio.h>

#ifndef ROUTINE_H
#define ROUTINE_H

typedef struct {
	char* name;
}workout;

typedef struct node{
	struct node* next;
	workout val;
}node;

// Each category holds a linked list of workouts
typedef struct {
	char* name;
	node* head;
	int size;
}category;

typedef struct {
	int week[7];
	category cat;
}routine;

#endif

routine createRoutine();
void displayRoutine(routine* r);

category createCat(char* cat);
void printCat(category* cat);