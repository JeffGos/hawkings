#include <iostream>
#include "time.h"

#include "model/model.h"

using namespace std;

void printDuration(clock_t start) {
	printf(" [%f seconds]\n\n", ((double) (clock() - start)) / CLOCKS_PER_SEC);
}

int main () {

	clock_t start;
	printf("===========================\n\n");
	printf("Hawkings Physics Engine Demo\n\n");

	start = clock();
	printDuration(start);

	printf("===========================\n\n");

	return 0;
}
