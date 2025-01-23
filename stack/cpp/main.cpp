#include <iostream>
#include "./stack.h"

int main()
{
  Stack s {1};

  s.push(2);
  s.push(3);

  s.print();

  return 0;
}
