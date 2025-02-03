#include <iostream>
#include <string>
#include "bst.h"
#include "node.h"

BinarySearchTree::BinarySearchTree() : root{nullptr} {}

void BinarySearchTree::printHelper(Node* node, std::string prefix, bool isLeft) const
{
  if (node != nullptr)
  {
    std::cout << prefix;

    std::cout << (isLeft ? "├──" : "└──" );

    // print the value of the node
    std::cout << node->value << std::endl;

    // enter the next tree level - left and right branch
    printHelper(node->right, prefix + (isLeft ? "│   " : "    "), true);
    printHelper(node->left, prefix + (isLeft ? "│   " : "    "), false);
  }
}

void BinarySearchTree::print() const
{
  printHelper(root, "", false);
}

bool BinarySearchTree::insert(int value)
{
  Node *new_node = new Node{value};

  if (root == nullptr)  // When the BST is empty
  {
    root = new_node;
    return true;
  }

  Node *tmp = root;

  while(true)
  {
    if(*new_node == *tmp) return false;

    if(*new_node < *tmp)
    {
      if(tmp->left == nullptr)
      {
        tmp->left = new_node;
        return true;
      }

      tmp = tmp->left;
    }
    else
    {
      if(tmp->right == nullptr)
      {
        tmp->right = new_node;
        return true;
      }

      tmp = tmp->right;
    }

  }
}
