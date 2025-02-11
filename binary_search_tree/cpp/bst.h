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
  bool contains(int value) const;
  void bfs() const;
  void dfs_preorder() const;
  void dfs_preorder(Node* node) const;
};
#endif
