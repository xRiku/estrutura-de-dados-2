#include "bst.h"


struct node {
  int key;
  struct node* left;
  struct node* right;
};


BST* createTree() {
  BST* root = malloc(sizeof(BST));
  return root;
}

Node* createNode(int key) {
  Node* node = malloc(sizeof(Node));
  node->key = key;
  node->left = NULL;
  node->right = NULL;
}

void insertNode(BST *root, Node *node) {
  Node *p = *root;
  // Node* node = createNode(key);
  if (*root == NULL) {
    *root = node; 
    return;
  }
  while (p->left != NULL || p->right != NULL) {
    if (node->key < p->key) {
      if (p->left == NULL) {
        break;
      }
      p = p->left;
    } else {
      if (node->key > p->key) {
        if (p->right == NULL) {
          break;
        }
        p = p->right;
      } else {
        return;
      }
    }
  }
  if (node->key < p->key) {
    p->left = node;
  } else {
    if (node->key > p->key) {
      p->right = node;
    } else {
      return;
    }
  }

}

void printTree(BST *root) {
  if ((*root)->left != NULL) {
    printTree(&(*root)->left);
  }
  printf("%d\n", (*root)->key);
  if ((*root)->right != NULL) {
    printTree(&(*root)->right);
  }
}

void freeNode(BST *root) {
  if ((*root)->left != NULL) {
    freeNode(&(*root)->left);
  }
  if ((*root)->right != NULL) {
    freeNode(&(*root)->right);
  }
  free(*root);
}

void freeTree(BST *root) {
  freeNode(root);
  free(root);
}

int treeHeight(BST *root) {
  if (*root == NULL) {
    return -1;
  } else {
    if ((*root)->left == NULL && (*root)->right == NULL) {
      return 0;
    } else {
      int rightHeight = treeHeight(&(*root)->right);
      int leftHeight = treeHeight(&(*root)->left);
      if (rightHeight > leftHeight) {
        return (rightHeight + 1);
      } else {
        return (leftHeight + 1);
      }
    }
  }
}