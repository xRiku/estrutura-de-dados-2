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

void printRoot(BST *root) {
  printf("%d\n", (*root)->key);
}

void rec_preorder(BST *root, void (*visit)(BST*)) {
  Node *p = *root;
  if (p == NULL) {
    return;
  }
  Stack *stack = createStack();
  push(stack, p);

  while(stackHeight(stack) > 0) {
    Item *item = pop(stack);
    p = getElement(item);
    (*visit)(&p);
    free(item);

    if ((p)->right != NULL) {
      push(stack, (p)->right);
    }
    if ((p)->left != NULL) {
      push(stack, (p)->left);
    }
  }
  deleteStack(stack);
}

void rec_inorder(BST *root, void (*visit)(BST*)) {
  Node *p = *root;
  Stack *stack = createStack();
  while(stackHeight(stack) > 0 || p != NULL) {
    if (p != NULL) {
      push(stack, p);
      p = (p)->left;
    } else {
      Item *item = pop(stack);
      p = getElement(item);
      (*visit)(&p);
      p = (p)->right;
    }
  }
  deleteStack(stack);
}


void rec_postorder(BST *root, void (*visit)(BST*)) {
  Node* p = *root;
  Stack* stack = createStack();
  Node *lastNodeVisited = NULL;
  // *p = NULL;
  while (stackHeight(stack) > 0 || p != NULL) {
    if (p != NULL) {
      push(stack, p);
      p = p->left;
    } else {
      Item *peeked = peek(stack);
      Node *peekNode = getElement(peeked);
      if (peekNode->right != NULL && lastNodeVisited != peekNode->right) {
        p = peekNode->right;
      } else {
        (*visit)(&peekNode);
        Item *item = pop(stack);
        lastNodeVisited = getElement(item);
      }
    }
  }
  deleteStack(stack);
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