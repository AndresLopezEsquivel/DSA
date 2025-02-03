#include <iostream>
#include "node.h"
#include "bst.h"

int main()
{
  // Test operator= and operator< for Node
  Node* node1 = new Node(1);
  Node* node2 = new Node(2);
  Node* node3 = new Node(1);

  std::cout << std::boolalpha;
  std::cout << "node1 == node2: " << (*node1 == *node2) << std::endl; // false
  std::cout << "node1 == node3: " << (*node1 == *node3) << std::endl; // true
  std::cout << "node1 < node2: " << (*node1 < *node2) << std::endl; // true
  std::cout << "node1 < node3: " << (*node1 < *node3) << std::endl; // false
  std::cout << "node1 > node2: " << (*node1 > *node2) << std::endl; // false
  std::cout << "node1 > node3: " << (*node1 > *node3) << std::endl; // false
  std::cout << "node3 > node1: " << (*node3 > *node1) << std::endl; // false

  // Test BinarySearchTree class
  BinarySearchTree bst;
  bst.insert(5);
  bst.insert(3);
  bst.insert(7);
  bst.insert(2);
  bst.insert(4);
  std::cout << std::endl;
  bst.print();

  bst.insert(6);
  bst.insert(8);
  bst.insert(1);
  bst.insert(9);
  std::cout << std::endl;
  bst.print();

  return 0;
}
