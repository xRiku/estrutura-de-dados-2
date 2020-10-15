#include "item.h"
#include <stdlib.h>

void merge(Item *a, Item *aux, int lo, int mid, int hi) {
  for (int k = lo; k <= hi; k += 1) {
    aux[k] = a[k];
  }
  int i = lo, j = mid + 1;
  for (int k = lo; k <= hi; k += 1) {
    if (i > mid) {
      a[k] = aux[j++];
    } else {
      if (j > hi) {
        a[k] = aux[i++];
      } else {
        if (less(aux[j], aux[i])) {
          a[k] = aux[j++];
        } else {
          a[k] = aux[i++];
        }
      }
    }
  }
}

void merge_sort(Item *a, Item *aux, int lo, int hi) {
  if (hi <= lo) {
    return;
  }
  int mid = lo + (hi - lo) / 2;
  merge_sort(a, aux, lo, mid);
  merge_sort(a, aux, mid+1, hi);
  merge(a, aux, lo, mid, hi);
}

void sort(Item *a, int lo, int hi) {
  int n = (hi - lo) + 1;
  Item *aux = malloc(n * sizeof(Item));
  merge_sort(a, aux, lo, hi);
  free(aux);
}