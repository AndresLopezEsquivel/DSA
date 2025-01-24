#include <iostream>
#include "queue.h"

Queue::Queue() : first(nullptr), last(nullptr), size(0) {}

Queue::Queue(int value):
first(new Node(value)),
last(nullptr),
size(1)
{
  last = first;
}

void Queue::print() const
{
  Node *tmp = first;
  while(tmp)
  {
    std::cout << tmp->value << std::endl;
    tmp = tmp->next;
  }

}

bool Queue::is_empty() const
{
  return !first && !last;
}

void Queue::enqueue(int value)
{
  Node* new_node = new Node{value};
  size++;
  if(this->is_empty())
  {
    first = new_node;
    last = new_node;
  }
  else
  {
    last->next = new_node;
    last = new_node;
  }
}

int Queue::dequeue()
{
  if(this->is_empty()) return INT_MIN;
  int value = first->value;
  Node *node = first;
  if(first == last)
  {
    first = nullptr;
    last = nullptr;
  }
  else
  {
    first = first->next;
  }
  delete node;
  size--;
  return value;
}

Queue::~Queue()
{

}
