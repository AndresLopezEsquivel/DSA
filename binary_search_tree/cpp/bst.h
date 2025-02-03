#ifndef BST_H
#define BST_H
#include "node.h"
class BinarySearchTree
{
  private:
  Node* root;

  public:
  BinarySearchTree();
  bool insert(int value);
};
#endif
