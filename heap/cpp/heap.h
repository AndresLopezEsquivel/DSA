#ifndef HEAP_H
#define HEAP_H
#include <vector>
class Heap
{
  private:
  std::vector<int> heap;
  int get_left_child_index(int parent_index) const;
  int get_right_child_index(int parent_index) const;
  int get_parent_index(int child_index) const;
  void swap(int index_1, int index_2);
  void sink_down(int index);
  int index_of_max(int index_1, int index_2);

  public:
  void insert(int value);
  void print() const;
  int remove();
};
#endif
