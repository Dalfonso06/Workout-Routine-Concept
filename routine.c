#include "routine.h"

char* days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
char* categories[] = {"Push", "Pull", "Legs", "Rest"};

// NOT COMPLETE shows the days of the week with which category
void display_routine(routine* r) {
	for (int i = 0; i < 7; i++) {
		printf("%s\tCategory: %s\n", days[r->week[i] - 1], r->cat[i].name);
	}
	printf("\n");
}

// initiates the routine
routine create_routine() {

	routine r;
	int j;

	printf("Create routine for each day (0 = Push, 1 = Pull, 2 = Legs, 3 = Rest)\n\n");

	for (int i = 0; i < 7; i++) {
		r.week[i] = i+1;
		printf("Category for %s:", days[i]);
		scanf("%d", &j);
		r.cat[i] = create_cat(categories[j]);
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

// Prints category
void print_cat(category* cat) {
	printf("%s\n", cat->name);

	// Conditional works and recognizes if category is empty
	if (cat->head->val.name == NULL) {
		printf("There are no workouts in %s category\n", cat->name);
	} else {
		printf("Conditional was not met\n");
	}
}