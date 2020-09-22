#ifndef _BST_
#define _BST_

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

typedef Node* BST;


BST* createTree();

Node* createNode(int);

void insertNode(BST*, Node*);

void preOrderTreePrint(BST*);

void inOrderTreePrint(BST*);

void freeNode(BST *);

void freeTree(BST *);

int treeHeight(BST *);

#endif