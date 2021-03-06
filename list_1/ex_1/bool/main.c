#include "sieve.h"

int main (int argc, char **argv) {
  if (argc > 1) {
    int arrayLength = atoi(argv[1]) - 1;
    if (arrayLength < 2) {
      printf("Only positive prime numbers greater than or equal to 2 shall be chosen\n");
      return 0;
    }
    bool *array = createArray(arrayLength);
    fillArray(array, arrayLength);
    markArray(array, arrayLength);
    printArray(array, arrayLength);
    free(array);
  } else {
    printf("This program requires one input number\n");
  }
}