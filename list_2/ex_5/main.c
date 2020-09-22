#include "bst.h"

int main() {
  BST* root = createTree();
  Node* node = createNode(4);
  Node* node2 = createNode(2);
  Node* node3 = createNode(3);
  Node* node4 = createNode(1);
  Node* node5 = createNode(7);
  insertNode(root, node);
  insertNode(root, node2);
  insertNode(root, node3);
  insertNode(root, node4);
  insertNode(root, node5);
  void (*preOrder)() = &printRoot;
  // rec_preorder(root, printRoot);
  putchar('\n');
  rec_inorder(root, printRoot);
  putchar('\n');
  // rec_postorder(root, printRoot);
  freeTree(root);
}