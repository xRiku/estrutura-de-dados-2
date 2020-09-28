#include "item.h"
#include <stdlib.h>
#include <stdio.h>

extern void sort(Item *a, int lo, int hi);

void printVector(Item *a, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  putchar('\n');
}

int main(int argc, char **argv) {
  int N = atoi(argv[1]);
  int *vector = malloc(sizeof(int)*N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &vector[i]);
  }
  sort(vector, 0, N);
  printVector(vector, N);
  free(vector);
}

