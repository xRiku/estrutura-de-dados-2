#include "josephus.h"

int main (int argc, char ** argv) {
  if (argc > 2) {
    int N = atoi(argv[1]);
    int M = atoi(argv[2]);
    List *l = createList();
    fillList(N, l);
    chooseLeader(l, M);
    printList(l);
    freeList(l);
  } else {
    printf("The parameters should be two integer numbers\n");
  }
}