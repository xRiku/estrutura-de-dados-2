#include "item.h"


void sort(Item *a, int lo, int hi) {
  for (int i = 0; i < hi; i++) {
    for (int j = hi - 1; j > i;j--) {
      if (a[j] < a[j-1]) {
        exch(a[j], a[j-1]);
      }
    }
  }
}