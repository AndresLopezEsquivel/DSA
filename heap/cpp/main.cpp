#include <iostream>
#include "heap.h"

int main()
{
  Heap heap;

  heap.insert(95);
  heap.insert(75);
  heap.insert(80);
  heap.insert(55);
  heap.insert(60);
  heap.insert(50);
  heap.insert(65);


  heap.print();
  std::cout << std::endl;

  heap.remove();
  std::cout << std::endl;

  heap.print();
  std::cout << std::endl;

  heap.remove();
  std::cout << std::endl;

  heap.print();
  std::cout << std::endl;

  return 0;
}
