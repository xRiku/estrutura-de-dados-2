#include "stack.h"

int main(int argc, char  **argv) {
  int N = 0;
  for (int i = 0; i < argc; i += 1) {
    if (*argv[i] != '(' || *argv[i] != ')') {
      if (!isOperator(argv[i])) {
        N += 1;
      }
    }
  }
  double *doubles = malloc(sizeof(double)*N);
  Stack *operators = createStack();
  Stack *operands = createStack();
  int j = 0;
  for (int i = 1; i < argc; i += 1) {
    if (*argv[i] != '(' && *argv[i] != ')') {
      if (isOperator(argv[i])) {
        Element *element = createElement(2, argv[i]);
        push(operators, element);
      } else {
        doubles[j] = atof(argv[i]);
        Element *element = createElement(1, &doubles[j]);
        push(operands, element);
        j += 1;
      }
    }
    // if (isOperator(argv[i])){
    //   push(operators, )
    // } else {
    //   push(operands, argc[])
    // }
  }

  printStack(operands);
  printStack(operators);
  
}