#ifndef _JOSEPHUS_
#define _JOSEPHUS

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

typedef struct list List;


List* createList();

void fillList(int);

void appendList(Node *, List *);

void printList(List *list);

void freeList(List*);

void freeNode(Node *);

Node* createNode(int);

#endif