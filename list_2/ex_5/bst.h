#ifndef _BST_
#define _BST_
#include "stack.h"

typedef struct node Node;

typedef Node* BST;

BST *createTree();

Node* createNode(int);

void insertNode(BST*, Node*);

void printRoot(BST*);

void rec_preorder(BST *root, void (*visit)(BST*));

void rec_inorder(BST *root, void (*visit)(BST*));

void rec_postorder(BST *root, void (*visit)(BST*));

void freeTree(BST *);


#endif