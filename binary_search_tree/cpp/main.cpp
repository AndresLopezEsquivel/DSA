#include <iostream>
#include "node.h"

int main()
{
  // Test operator= and operator< for Node
  Node* node1 = new Node(1);
  Node* node2 = new Node(2);
  Node* node3 = new Node(1);

  std::cout << std::boolalpha;
  std::cout << "node1 == node2: " << (*node1 == node2) << std::endl; // false
  std::cout << "node1 == node3: " << (*node1 == node3) << std::endl; // true
  std::cout << "node1 < node2: " << (*node1 < node2) << std::endl; // true
  std::cout << "node1 < node3: " << (*node1 < node3) << std::endl; // false
  std::cout << "node1 > node2: " << (*node1 > node2) << std::endl; // false
  std::cout << "node1 > node3: " << (*node1 > node3) << std::endl; // false
  std::cout << "node3 > node1: " << (*node3 > node1) << std::endl; // false
  return 0;
}
