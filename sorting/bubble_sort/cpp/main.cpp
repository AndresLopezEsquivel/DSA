#include <iostream>
#include <array>

template<typename T, size_t N>
std::ostream& operator<<(std::ostream& os, const std::array<T,N>& array)
{
  os << "[";
  for(size_t i = 0; i < N - 1; i++)
    os << array[i] << ", ";
  os << array[N - 1] << "]";
  return os;
}

template<size_t N>
void bubble_sort(std::array<int,N>& a)
{
  for(size_t i = N; i > 1; i--)
  {
    for(size_t j = 1; j < N; j++)
    {
      if(a[j - 1] > a[j])
      {
        int tmp = a[j - 1];
        a[j - 1] = a [j];
        a[j] = tmp;
      }
    }
    std::cout << a << std::endl;
  }
}

int main()
{
   std::array<int,9> numbers {9, 8, 7, 6, 5, 4, 3, 2, 1};
   std::cout << "BEGIN: " << numbers << std::endl;
   bubble_sort(numbers);
   std::cout << "END: " << numbers << std::endl;
  return 0;
}
