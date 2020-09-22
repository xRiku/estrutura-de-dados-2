#include "bst.h"


int main() {
  BST* root = createTree();
  Node* node4 = createNode(4);
  Node* node = createNode(2);
  Node* node2 = createNode(3);
  Node* node3 = createNode(1);
  Node* node5 = createNode(7);
  insertNode(root, node);
  insertNode(root, node2);
  insertNode(root, node3);
  insertNode(root, node4);
  insertNode(root, node5);
  printTree(root);
  freeTree(root);
}