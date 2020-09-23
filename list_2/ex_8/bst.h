#ifndef _BST_
#define _BST_
#include "queue.h"

typedef struct node Node;

typedef Node* BST;

BST *createTree();

Node* createNode(int);

void insertNode(BST*, Node*);

void printRoot(BST*);

void levelOrderTraversal(BST *root, void (*visit)(BST*));

void freeTree(BST *);


#endif