#ifndef _BST_
#define _BST_

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

typedef Node* BST;


BST* createTree();

Node* createNode(int);

void insertNode(BST*, Node*);

void printTree(BST*);

void freeNode(BST *);

void freeTree(BST *);

#endif