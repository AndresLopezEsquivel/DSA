#include <array>
#include <iostream>

template<typename T, size_t N>
std::ostream& operator<<(std::ostream& os, const std::array<T,N>& array)
{
  os << "[";
  for(size_t i = 0; i < N; i++)
  {
    os << array[i];
    if(i != N - 1) os << ", ";
    else os << "]";
  }
  return os;
}

template<size_t N>
void selection_sort(std::array<int,N>& array)
{
  for(size_t i = 0; i < N - 1; i++)
  {
    int index_min = i;
    for(size_t j = i; j < N; j++)
    {
      if(array[j] < array[index_min]) index_min = j;
    }
    int tmp = array[i];
    array[i] = array[index_min];
    array[index_min] = tmp;

    std::cout << array << std::endl;
  }
}

int main()
{
  std::array<int, 5> numbers {5, 3, 4, 1, 2};
  std::cout << "BEGIN: " << numbers << std::endl;
  selection_sort(numbers);
  std::cout << "END: " << numbers << std::endl;
  return 0;
}
