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

typedef struct {
	char week[7];
}routine;

#endif

routine createRoutine();
void displayRoutine();