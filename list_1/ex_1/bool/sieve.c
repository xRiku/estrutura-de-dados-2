#include "sieve.h"

bool* createArray(int n) {
  bool *array = malloc(sizeof(bool)* n);
  return array;
}

void fillArray(bool *array, int arrayLength) {
  for (int i = 0; i < arrayLength; i += 1) {
    array[i] = true;
  }
}

void markArray(bool *array, int arrayLength) {
  for (int i = 0; i < arrayLength; i += 1) {
    if (array[i]) {
      for (int j = i + 2; j <= arrayLength + 1; j += i + 2) {
        if (j != i + 2) {
          array[j-2] = false;
        }
      }
    }
  }
}

void printArray(bool *array, int arrayLength) {
  for (int i = 0; i < arrayLength; i += 1) {
    if (array[i]) {
      printf("%d ", i + 2);
    }
  }
  putchar('\n');
  // for (int i = 0; i < arrayLength; i += 1) {
  //   if (array[i]) {
  //     printf("%d ", true);
  //   }
  // }
  // putchar('\n');
}

void freeArray(bool *array) {
	free(array);
}