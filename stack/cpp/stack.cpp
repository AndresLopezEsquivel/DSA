#include <iostream>
#include "./node.h"
#include "./stack.h"

Stack::Stack() : height(1), top(nullptr) {}

Stack::Stack(int value) : height(1), top(new Node(value)) {}

int Stack::get_height() const { return height; }

int Stack::get_top() const { return top->value; }

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
