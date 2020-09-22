#include "bst.h"


int main() {
  BST* root = createTree();
  Node* node = createNode(2);
  insertNode(root, node);
  printTree(root);
}