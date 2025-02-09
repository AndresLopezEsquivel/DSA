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
  while(i > 0)
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

int Heap::index_of_max(int index_1, int index_2)
{
  return heap[index_1] > heap[index_2] ? index_1 : index_2;
}

void Heap::sink_down(int index)
{
  int i = index;
  int max_index = i;
  int last_index = heap.size() - 1;
  while(i <= last_index)
  {
    int left_child_index = get_left_child_index(i);
    int right_child_index = get_right_child_index(i);
    if(right_child_index > last_index)
      max_index = index_of_max(i, left_child_index);
    if(left_child_index > last_index)
      max_index = i;
    if(right_child_index <= last_index && left_child_index <= last_index)
    {
      max_index = index_of_max(right_child_index, left_child_index);
      max_index = index_of_max(i, max_index);
    }
    if(max_index == i) break;
    swap(i, max_index);
    i = max_index;
  }
}

int Heap::remove()
{
  if(heap.empty()) return INT_MIN;
  int max_value = heap.front();
  if(heap.size() == 1) heap.pop_back();
  if(heap.size() > 1)
  {
    heap[0] = heap.back();
    heap.pop_back();
    sink_down(0);
  }
  return max_value;
}
