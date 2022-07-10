#include "routine.h"
#include <time.h>

int main(int argc, char** argv) {

	routine myRout = createRoutine();
	displayRoutine(&myRout);

	return 0;
}