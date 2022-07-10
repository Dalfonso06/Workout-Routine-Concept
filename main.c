#include "routine.h"
#include <time.h>

int main(int argc, char** argv) {

	routine myRout = createRoutine();
	displayRoutine(&myRout);

	category cat = createCat("Push");
	printCat(&cat);

	return 0;
}