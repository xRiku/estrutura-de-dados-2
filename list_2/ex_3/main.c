#include "bst.h"
#include <time.h>
#include <stdlib.h>


int main(int argc, char **argv) {
  // if (argc > 1) {
    // int keys = atoi(argv[1]);
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
    // srand(time(NULL));
    // for (int i = 0; i < keys; i += 1) {
    //   int r = rand();
    //   insertNode(root, createNode(r));
    // }
    // void (*inOrder)() = &inOrderTreePrint;
    void (*preOrder)() = &printRoot;
    rec_preorder(root, printRoot);
    putchar('\n');
    rec_inorder(root, printRoot);
    putchar('\n');
    rec_postorder(root, printRoot);
    freeTree(root);
  // }
}