#include <iostream>
#include "queue.h"

int main()
{
  Queue q {1};
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  std::cout << "After enqueueing 4 elements: " << std::endl;
  q.print();
  std::cout << "Dequeueing 2 elements: " << std::endl;
  std::cout << q.dequeue() << std::endl;
  std::cout << q.dequeue() << std::endl;
  std::cout << "After dequeueing 2 elements: " << std::endl;
  q.print();
  return 0;
}
