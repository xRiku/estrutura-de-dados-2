#include "bst.h"

int main() {
  Queue *queue = createQueue();
  int x = 4;
  int x2 = 2;
  int x3 = 3;
  int x4 = 1;
  int x5 = 7;
  enqueue(queue, &x);
  enqueue(queue, &x2);
  enqueue(queue, &x3);
  enqueue(queue, &x4);
  enqueue(queue, &x5);

  // free(dequeue(queue));

  printf("%d \n", queueLength(queue));

  printQueue(queue, 1);

  deleteQueue(queue);
  // dequeue(queue);
  // BST* root = createTree();
  // Node* node = createNode(4);
  // Node* node2 = createNode(2);
  // Node* node3 = createNode(3);
  // Node* node4 = createNode(1);
  // Node* node5 = createNode(7);
  // insertNode(root, node);
  // insertNode(root, node2);
  // insertNode(root, node3);
  // insertNode(root, node4);
  // insertNode(root, node5);
  // void (*preOrder)() = &printRoot;
  // rec_preorder(root, printRoot);
  // putchar('\n');
  // rec_inorder(root, printRoot);
  // putchar('\n');
  // rec_postorder(root, printRoot);
  // freeTree(root);
}