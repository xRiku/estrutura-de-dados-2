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

void levelOrderTraversal(BST *root, void (*visit)(BST*)) {
  Node *p = *root;
  Queue *queue = createQueue();
  enqueue(queue, p);
  while (queueLength(queue) > 0) {
    Item *item = dequeue(queue);
    p = getElement(item);
    (*visit)(&p);
    free(item);
    if (p->left != NULL) {
      enqueue(queue, p->left);
    }
    if (p->right != NULL) {
      enqueue(queue, p->right);
    }
    
  }
  deleteQueue(queue);
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