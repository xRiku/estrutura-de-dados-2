#include "item.h"
#include <stdlib.h>
#include <stdio.h>

extern void sort(Item *a, int lo, int hi);

int main(int argc, char **argv) {
  int N = atoi(argv[1]);
  int *vector = malloc(sizeof(int)*N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &vector[i]);
  }
  sort(vector, 0, N);
  free(vector);
}