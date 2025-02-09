#include <iostream>
#include "heap.h"

int main()
{
  Heap heap;

  heap.insert(99);
  heap.insert(72);
  heap.insert(61);
  heap.insert(58);
  heap.insert(100);

  heap.print();
  std::cout << std::endl;

  return 0;
}
