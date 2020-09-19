#include "stack.h"

int main(int argc, char  **argv) {
  int M = 0;
  int N = 0;
  for (int i = 0; i < argc; i += 1) {
    if (isOperator(argv[i])) {
      M += 1;
    } else {
      N += 1;
    }
  }
  double *doubles = malloc(sizeof(double)*N);
  // Stack *operators = createStack();
  Stack *operands = createStack();
  for (int i = 1; i < argc; i += 1) {
    doubles[i-1] = atof(argv[i]);
    Element *element = createElement(1, &doubles[i-1]);
    push(operands, element);
    // if (isOperator(argv[i])){
    //   push(operators, )
    // } else {
    //   push(operands, argc[])
    // }
  }

  printStack(operands);
  
}