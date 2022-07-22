#include <stdio.h>
#include <stdlib.h>

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
	category split[5];
	category schedule[7];
}routine;

#endif

routine create_routine();
void display_routine(routine* r);

category create_cat(char* cat);
void print_cat(category* cat);
void add_workout(category* cat, char* workout);