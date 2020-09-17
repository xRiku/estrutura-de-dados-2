#include "sieve.h"


int* createArray(int n) {
    int *array = malloc(sizeof(int)* n);
    return array;
}

void fillArray(int *array, int arrayLength) {
    for (int i = 0; i < arrayLength; i += 1) {
        array[i] = i;
    }
}

void printArray(int *array, int arrayLength) {
    for (int i = 0; i < arrayLength; i += 1) {
        printf("%d ", array[i]);
    }
    putchar('\n');
}

void freeArray(int *array) {
    free(array);
}