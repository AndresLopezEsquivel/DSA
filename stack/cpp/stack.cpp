#include <iostream>
#include "./node.h"
#include "./stack.h"

Stack::Stack() : height(0), top(nullptr) {}

Stack::Stack(int value) : height(1), top(new Node(value)) {}

int Stack::get_height() const { return height; }

int Stack::get_top() const
{
  if(!top) return INT_MIN;
  return top->value;
}

void Stack::print() const
{
  Node *tmp = top;
  while(tmp)
  {
    std::cout << tmp->value << std::endl;
    tmp = tmp->next;
  }
}

void Stack::push(int value)
{
  Node* new_node = new Node{value};
  new_node->next = top;
  top = new_node;
  height++;
}

int Stack::pop()
{
  if(!top) return INT_MIN;
  Node* node = top;
  int value = node->value;
  top = top->next;
  delete node;
  height--;
  return value;
}

Stack::~Stack()
{
  std::cout << "In Stack::~Stack()" << std::endl;
  if(!top) return;
  while(top)
  {
    std::cout << "Deleting: " << top->value << std::endl;
    pop();
  }
}
