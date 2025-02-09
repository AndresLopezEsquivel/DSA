#include <iostream>
#include "heap.h"

int Heap::get_left_child_index(int parent_index) const
{
  return 2 * parent_index + 1;
}

int Heap::get_right_child_index(int parent_index) const
{
  return 2 * parent_index + 2;
}

int Heap::get_parent_index(int child_index) const
{
  return (child_index - 1) / 2;
}

void Heap::swap(int index_1, int index_2)
{
  int tmp = heap[index_1];
  heap[index_1] = heap[index_2];
  heap[index_2] = tmp;
}

void Heap::insert(int value)
{
  heap.push_back(value);
  int i = heap.size() - 1;
  while(i >0)
  {
    int parent_index = get_parent_index(i);
    if(heap[i] <= heap[parent_index]) break; // max heap
    swap(i, parent_index);
    i = parent_index;
  }
}

void Heap::print() const
{
  std::cout << "[";
  for(auto it = heap.begin(); it != std::prev(heap.end()); it++)
  {
    std::cout << *it << ", ";
  }
  std::cout << *std::prev(heap.end()) << "]";
}
