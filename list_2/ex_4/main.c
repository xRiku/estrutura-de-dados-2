#include "bst.h"

int main() {
  BST *root = createTree();
  Stack *stack = createStack();
  int *p = malloc(sizeof(int)*2);
  p[0] = 2;
  p[1] = 3;
  push(stack, &p[0]);
  push(stack, &p[1]);
  pop(stack);
  printf("%d\n", stackHeight(stack));
}