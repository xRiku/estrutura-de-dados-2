#include "item.h"


void sort(Item *a, int lo, int hi) {
  for (int i = 1; i < hi; i++) {
    for (int k = i; k > 0 && less(a[k], a[k-1]); k--) {
      exch(a[k], a[k-1]);
    }
  }
}