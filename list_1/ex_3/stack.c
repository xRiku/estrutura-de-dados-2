#include "stack.h"

struct element {
  int id;
  void *item;
  struct element *next;
};

struct stack {
  int height;
  Element *head;
};


Stack* createStack() {
  Stack *s = malloc(sizeof(Stack));
  s->height = 0;
  s->head = NULL;
  return s;
}

Element* createElement(int type, void *item) {
  Element *element = malloc(sizeof(Element));
  element->id = type;
  element->item = item;
  element->next = NULL;
  return element;
}

void push(Stack *stack, Element *element) {
  // double *d = element->item;
  // printf("%lf\n", *d);
  if (stack->head == NULL) {
    stack->head = element;
    stack->height = 1;
  } else {
    element->next = stack->head;
    stack->head = element;
    stack->height += 1;
  }
}

Element* pop(Stack *stack) {
  Element *p = stack->head;
  stack->head = stack->head->next;
  stack->height -= 1;
  p->next = NULL;
  return p;
}

void printStack(Stack *stack) {
  Element *p = stack->head;
  for (int i = 0; i < stack->height; i++) {
    if (p->id == 1) {
      double *d = p->item;
      printf("%.3lf ", *d);
    } else {
      char *c = p->item;
      printf("%c ",  *c);
    }
    p = p->next;
  }
  putchar('\n');
}

void freeStack(Stack *stack) {
  Element *p;
  for (int i = 0; i < stack->height; i++) {
    p = stack->head;
    stack->head = stack->head->next;
    free(p);
  }
  free(stack);
}




int isOperator(char *c) {
  switch(*c) {
    case '+':
    case '-':
    case '*':
    case '/':
      return 1;
    default:
      return 0;
  }
}

double computeValues(Element *operand, Element *operand2, Element* operator) {
  double *d = operand->item;
  double *d2 = operand2->item;
  char *c = operator->item;
  double result;
  switch (*c) {
    case '+':
      result = *d + *d2;
      break;
    case '-':
      result = *d - *d2;
      break;
    case '*':
      result = *d * *d2;
      break;
    case '/':
      result = *d / *d2;
      break;
    default: 
      result = *d + *d2;
  }
  return result;
}