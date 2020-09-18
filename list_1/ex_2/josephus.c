#include "josephus.h"


struct node {
  int number;
  struct node *next;
};

struct list {
  Node* head;
  Node* tail;
  int length;
};

void chooseLeader(List *list, int M) {
  int counter = 1;
  Node *q = list->head;
  for (Node *p = list->head; list->length > 1; p = p->next) {
    if (counter == M) {
      pop(q, p, list);
      counter = 0;
    }
    q = p;
    counter += 1;
  }
  putchar('\n');
}


List* createList() {
  List *l = malloc(sizeof(List));
  l->head = NULL;
  l->tail = NULL;
  return l;
}

void fillList(int N, List* list) { 
  for (int i = 0; i < N; i++) {
    Node *node = createNode(i+1);
    appendList(node, list);
  }
  list->tail->next = list->head;
}

void appendList(Node *node, List *list) {
  if (list->head == NULL) {
    list->head = node;
    list->tail = list->head;
    list->length += 1;
  } else {
    list->tail->next = node;
    list->tail = list->tail->next;
    list->length += 1;
  }
}

void pop(Node* previous, Node* current, List *list) {
   previous->next = current->next;
   if (list->head == current) {
     list->head = current->next;
   } 

   if (list->tail == current) {
     list->tail = previous;
   }

   printf("%d ", current->number);
   freeNode(current);
   current = current->next;
   list->length -= 1;
}

void printList(List *list) {
  Node *p = list->head;
  for (int i = 0; i < list->length; i += 1) {
    printf("%d ", p->number);
    p = p->next;
  }
  putchar('\n');
}

void freeList(List* list) {
  for (Node *p = list->head; list->head != list->tail;) {
    list->head = list->head->next;
    free(p);
    p = list->head;
  }
  free(list->head);
  free(list);
}

Node* createNode(int number) {
  Node *n = malloc(sizeof(Node));
  n->number = number;
  n->next = NULL;
  return n;
}


void freeNode(Node *n) {
  free(n);
}
