#include "bst.h"

int main() {
  // BST *root = createTree();
  Stack *stack = createStack();
  int *p = malloc(sizeof(int)*3);
  p[0] = 2;
  p[1] = 3;
  p[2] = 7;
  push(stack, &p[0]);
  push(stack, &p[1]);
  push(stack, &p[2]);
  free(pop(stack));
  printf("%d\n", stackHeight(stack));
  printStack(stack, 1);
  deleteStack(stack);
  free(p);
}