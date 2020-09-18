#include "sieve.h"


#define BYTE 8

char* createArray(int n) {
  char *array = malloc(sizeof(char)* (n/BYTE + 1) );
  return array;
}

void fillArray(char *array, int arrayLength) {
  for (int i = 0; i < arrayLength; i += 1) {
    array[i/BYTE] |= (1U << i%BYTE);
  }
}

void markArray(char *array, int arrayLength) {
  for (int i = 2; i < arrayLength; i += 1) {
    if (((array[i/BYTE] >> i%BYTE) & 1U)) {
      for (int j = i; j <= arrayLength; j += i) {
        if (j != i) {
          array[j/BYTE] &= ~(1U << j%BYTE);
          // array[j] = 0;
        }
      }
    }
  }
}

void printArray(char *array, int arrayLength) {
  for (int i = 2; i <= arrayLength ; i += 1) {
    if ((array[i/BYTE] >> i%BYTE) & 1U) {
      printf("%d ", i);
    }
  }
  putchar('\n');
}

void freeArray(char *array) {
	free(array);
}