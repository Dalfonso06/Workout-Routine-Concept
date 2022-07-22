#include "routine.h"

char* days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
char* categories[] = {"Push", "Pull", "Legs", "Core", "Rest"};

// NOT COMPLETE shows the days of the week with which category
void display_routine(routine* r) {
	for (int i = 0; i < 7; i++) {
		printf("%s\tCategory: ", days[r->week[i] - 1]);
		print_cat(&r->schedule[i]);
	}
	printf("\n");
}

// initiates the routine
routine create_routine() {

	routine r;
	int j;

	// fill routine array with categories
	for (int i = 0; i < 5; i++) {
		r.split[i] = create_cat(categories[i]);
	}

	printf("Create routine for each day (0 = Push, 1 = Pull, 2 = Legs, 3 = Rest)\n\n");

	for (int i = 0; i < 7; i++) {
		r.week[i] = i+1;
		printf("Category for %s:", days[i]);
		scanf("%d", &j);
		if (j < 0 || j > 4) {
			r.schedule[i] = r.split[4];
			printf("\n");
			continue;
		}
		r.schedule[i] = r.split[j];
		printf("\n");
	}
	return r;
}

// Creates a category and creates a linked list with a workout
category create_cat(char* cat) {

	category *c = (category*)malloc(sizeof(category));
	c->name = cat;

	c->head = (node*)malloc(sizeof(node));
	c->head->next = c->head;

	return *c;
}

void add_workout(category* cat, char* workout) {

	// if head is empty
	if (cat->head->val.name == NULL) {
		cat->head->val.name = workout;
	} else {
		node* new_node = (node*)malloc(sizeof(node));
		new_node->val.name = workout;
		cat->head->next = new_node;
		new_node->next = cat->head;
	}
}

// Prints category
void print_cat(category* cat) {
	printf("%s\t", cat->name);

	// Conditional works and recognizes if category is empty
	if (cat->head->val.name == NULL) {
		printf("There are no workouts in this category\n");
	} else {
		printf("Conditional was not met\n");
	}
}






