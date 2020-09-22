#ifndef _BST_
#define _BST_

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

typedef Node* BST;


BST* createTree();

Node* createNode(int);

void insertNode(BST*, Node*);

void printRoot(BST*);

void freeNode(BST *);

void rec_preorder(BST *, void (*visit)(BST*));

void rec_inorder(BST *, void (*visit)(BST*));

void rec_postorder(BST *, void (*visit)(BST*));

void freeTree(BST *);

int treeHeight(BST *);

#endif