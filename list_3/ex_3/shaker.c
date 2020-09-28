#include "item.h"


void sort(Item *a, int lo, int hi) {
  int swapped;
  do {
    swapped = 0;
    for (int i = 0; i < hi - 2; i++) {
      if (less(a[i+1], a[i])) {
        exch(a[i], a[i+1]);
        swapped = 1;
      }
    }
    if (!swapped) {
      break;
    }
    swapped = 0;
    for (int i = hi - 2; i >= 0; i--) {
      if (less(a[i+1], a[i])) {
        exch(a[i], a[i+1]);
        swapped = 1;
      }
    }
  } while (swapped);
}