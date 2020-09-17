#include "sieve.h"


int* createArray(int n) {
    int *array = malloc(sizeof(int)* n);
    return array;
}

void fillArray(int *array, int arrayLength) {
    for (int i = 0; i < arrayLength; i += 1) {
        array[i] = i+2;
    }
}

void markArray(int *array, int arrayLength) {
    for (int i = 0; i < arrayLength; i += 1) {
        if (array[i] != 0) {
            for (int j = array[i]; j <= array[arrayLength - 1]; j += array[i]) {
                if (j != array[i]) {
                    array[j-2] = 0;
                }
            }
        }
    }
}

void printArray(int *array, int arrayLength) {
    for (int i = 0; i < arrayLength; i += 1) {
        if (array[i]) {
            printf("%d ", array[i]);
        }
    }
    putchar('\n');
}

void freeArray(int *array) {
    free(array);
}