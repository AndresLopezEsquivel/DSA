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
