#include "bst.h"
#include "node.h"

BinarySearchTree::BinarySearchTree() : root{nullptr} {}

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
