#include "sieve.h"

// Sieve of Eratosthenes

int main (int argc, char **argv) {
    if (argc > 1) {
        int arrayLength = atoi(argv[1]);
        int *array = createArray(arrayLength);
        fillArray(array, arrayLength);
        printArray(array, arrayLength);
        free(array);
    } else {
        printf("This program requires one input number\n");
    }
}