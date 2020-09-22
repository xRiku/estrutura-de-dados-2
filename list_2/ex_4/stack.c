#include "stack.h"


struct item {
  void *element;
  struct item* next;
};

struct stack {
  struct item* head;
  int height;
};


Stack* createStack() {
  Stack *stack = malloc(sizeof(Stack));
  stack->head = NULL;
  stack->height = 0;
  return stack;
}

void push(Stack *stack, void *element) {
  if (stack->head == NULL) {
    Item* item = malloc(sizeof(Item));
    item->element = element;
    item->next = NULL;
    stack->head = item;
    stack->height += 1;
  } else {
    Item* item = malloc(sizeof(Item));
    item->element = element;
    item->next = stack->head;
    stack->head = item;
    stack->height += 1;
  }
}

int stackHeight(Stack *stack) {
  return stack->height;
}