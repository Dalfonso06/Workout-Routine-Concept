#include "routine.h"
#include <time.h>

int main(int argc, char** argv) {

	routine myRout = create_routine();
	display_routine(&myRout);

	category cat = create_cat("Push");
	print_cat(&cat);

	add_workout(&cat, "Chest");
	add_workout(&cat, "Shoulders");
	return 0;
}