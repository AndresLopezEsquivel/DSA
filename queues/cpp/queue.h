#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

class Queue
{
  private:
  Node* first;
  Node* last;
  int size;

  public:
  Queue();
  Queue(int value);
  ~Queue();
  void print() const;
  void enqueue(int value);
  int dequeue();
  bool is_empty() const;
};
#endif
