#include <deque>
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

bool BinarySearchTree::contains(int value) const
{
  if(root == nullptr) return false;

  Node *tmp = root;

  while(tmp != nullptr)
  {
    if(tmp->value == value) return true;
    tmp = (value < tmp->value) ? tmp->left : tmp->right;
  }
  return false;
}

void BinarySearchTree::bfs() const
{
  std::deque<Node*> nodes;
  Node* tmp = root;
  nodes.push_back(tmp);
  while(nodes.size() > 0)
  {
    tmp = nodes.front();
    nodes.pop_front();
    if(tmp->left) nodes.push_back(tmp->left);
    if(tmp->right) nodes.push_back(tmp->right);
    std::cout << tmp->value << " ";
  }
  std::cout << std::endl;
}
