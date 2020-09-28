#include "item.h"


void sort(Item *a, int lo, int hi) {
  int k = 0;
  for (int i = 0; i < hi; i++) {
    k = i;
    for (int j = i + 1; j < hi; j++) {
      compexch(a[k], a[j]);
    }
  }
}