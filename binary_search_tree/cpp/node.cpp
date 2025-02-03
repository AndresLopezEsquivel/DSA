#include "node.h"

Node::Node(int value) : value{value}, left{nullptr}, right{nullptr} {}

bool Node::operator==(Node* node)
{
  return this->value == node->value;
}

bool Node::operator<(Node* node)
{
  return this->value < node->value;
}

bool Node::operator>(Node* node)
{
  return this->value > node->value;
}
