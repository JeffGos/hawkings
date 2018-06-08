#include <iostream>
#include "time.h"

#include "core/engine.h"

using namespace std;
using namespace hawkings;

void printDuration(clock_t start) {
	printf(" [%f seconds]\n\n", ((double) (clock() - start)) / CLOCKS_PER_SEC);
}

int main () {

	clock_t start;
	printf("===========================\n\n");
	printf("Hawkings Physics Engine Demo\n\n");

	start = clock();
	printDuration(start);

    unsigned long durationMs = 5000;

    printf("Running for %lu ms", durationMs);

    bool running = true;
    Engine* engine = new Engine(0.1f);

    while (running) {

        unsigned long time = clock();
        engine->update(time - start);
        running = start + durationMs < time;
    }

	printf("===========================\n\n");

	return 0;
}
