#include "stack.h"

int main(int argc, char  **argv) {
  Stack *operators = createStack();
  Stack *operands = createStack();
  for (int i = 1; i < argc; i += 1) {
    if (isOperator(argv[i])){
      push(operators, )
    } else {
      push(operands, argc[])
    }
  }
  
}