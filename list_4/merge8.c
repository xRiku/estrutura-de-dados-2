#include "item.h"
#include <stdlib.h>

#define SZ2 (sz+sz)
#define MIN(X,Y) ((X < Y) ? (X) : (Y))

void insert_sort(Item *a, int lo, int hi) {
  for (int i = 1; i < hi; i++) {
    for (int k = i; k > 0 && less(a[k], a[k-1]); k--) {
      exch(a[k], a[k-1]);
    }
  }
}

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

void sort(Item *a, int lo, int hi) {
  int N = (hi - lo) + 1;
  int y = N - 1;
  if (hi <= lo + CUTOFF - 1) {
    insert_sort(a, lo, hi);
    return;
  }
  Item *aux = malloc(N * sizeof(Item));
  for (int sz = 1; sz < N; sz = SZ2) {
    for (int lo = 0; lo < N-sz; lo += SZ2) {
      int x = lo + SZ2 - 1;
      if (!less(lo + sz-1, lo + sz)) {
        return;
      }
      merge(a, aux, lo, lo+sz-1, MIN(x,y));
    }
  }
  free(aux);
}