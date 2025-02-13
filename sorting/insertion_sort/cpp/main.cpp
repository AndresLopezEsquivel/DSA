#include <array>
#include <iostream>

template<typename T, size_t N>
std::ostream& operator<<(std::ostream& os, std::array<T,N> array)
{
  os << "[";
  for(size_t i = 0; i < N; i++)
  {
    os << array[i];
    if(i < N - 1) os << ", ";
    else os << "]";
  }
  return os;
}

template<size_t N>
void insertion_sort(std::array<int, N>& array)
{
  for(size_t i = 1; i < N; i++)
  {
    int j = i;
    int k = i - 1;
    while(j >= 0 && k >= 0)
    {
      if(array[k] > array[j])
      {
        int tmp = array[k];
        array[k] = array[j];
        array[j] = tmp;
        j--;
        k--;
      }
    }
    std::cout << array << std::endl;
  }
}

int main()
{
  std::array<int, 5> numbers {5, 4, 3, 2, 1};
  std::cout << "BEFORE SORTING: " << numbers << std::endl;
  insertion_sort(numbers);
  std::cout << "AFTER SORTING: " << numbers << std::endl;
  return 0;
}
