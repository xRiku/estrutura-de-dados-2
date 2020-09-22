#include "bst.h"

struct node {
  int key;
  struct node* left;
  struct node* right;
};

BST *createTree() {
  BST* root = malloc(sizeof(BST));
  (*root) = NULL;
  return root;
}