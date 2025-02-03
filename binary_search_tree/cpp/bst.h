#ifndef BST_H
#define BST_H
#include "node.h"
class BinarySearchTree
{
  private:
  Node* root;

  public:
  BinarySearchTree();
  void print() const;
  void printHelper(Node* node, std::string prefix, bool isLeft) const;
  bool insert(int value);
};
#endif
