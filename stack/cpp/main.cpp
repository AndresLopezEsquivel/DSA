#include <iostream>
#include "./stack.h"

int main()
{
  Stack s {1};

  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  s.print();

  // std::cout << "pop(): " << s.pop() << std::endl;
  // std::cout << "pop(): " << s.pop() << std::endl;
  // std::cout << "pop(): " << s.pop() << std::endl;
  // std::cout << "pop(): " << s.pop() << std::endl;
  // std::cout << "pop(): " << s.pop() << std::endl;

  return 0;
}
