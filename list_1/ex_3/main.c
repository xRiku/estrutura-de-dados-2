#include "stack.h"

int main(int argc, char  **argv) {
  int N = 0;
  int M = 0;
  for (int i = 0; i < argc; i += 1) {
    if (*argv[i] != '(' && *argv[i] != ')') {
      if (!isOperator(argv[i])) {
        N += 1;
      } else {
        M += 1;
      }
    }
  }
  double *doubles = malloc(sizeof(double)*M);
  // double *results = malloc(sizeof(double)*M);
  Stack *operators = createStack();
  Stack *operands = createStack();
  int j = 0;
  int k = 0;
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
    } else {
      if (*argv[i] == ')') {
        j -= 2;
        Element *operand1 = pop(operands);
        Element *operand2 = pop(operands);
        Element *operator = pop(operators);
        doubles[j] = computeValues(operand2, operand1, operator);
        // printf("a\n");
        Element *newElement = createElement(1, &doubles[j]);
        // printf("b\n");
        push(operands, newElement);
        // printf("c\n");
        free(operand1);
        free(operand2);
        free(operator);
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