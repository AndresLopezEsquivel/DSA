#ifndef STACK_H
#define STACK_H

#include "./node.h"

class Stack
{
  private:
  int height;
  Node *top;

  public:
  Stack();
  Stack(int value);
  void print() const;
  void push(int value);
  int get_top() const;
  int get_height() const;
};

#endif
