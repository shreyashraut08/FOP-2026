#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number (0 to RAND_MAX)
    int random = rand();
    printf("Random number is: %d\n", random);

    // Example: random number between 0 and 99
    int randomRange = rand() % 100;
    printf("Random number between 0 and 99 is: %d\n", randomRange);

    return 0;
}
