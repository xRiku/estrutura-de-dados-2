#include "bst.h"
#include <time.h>
#include <stdlib.h>


int main(int argc, char **argv) {
  if (argc > 1) {
    int keys = atoi(argv[1]);
    BST* root = createTree();
    srand(time(NULL));
    for (int i = 0; i < keys; i += 1) {
      int r = rand();
      insertNode(root, createNode(r));
    }
    printf("Height: %d\n", treeHeight(root));
    freeTree(root);
  }
}