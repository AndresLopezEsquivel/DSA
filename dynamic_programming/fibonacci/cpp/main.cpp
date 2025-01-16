#include <iostream>
#include <array>
#include <vector>

// No optimized approach
static int calls_fibonacci_v1 = 0;

int fibonacci_v1(int n)
{
  calls_fibonacci_v1++;
  if(n == 0 | n == 1) return n;
  return fibonacci_v1(n - 1) + fibonacci_v1(n - 2);
}

// Top-Down Dynamic Programming
static int calls_fibonacci_v2 = 0;

int fibonacci_v2(int n, std::vector<int> &memo)
{
  calls_fibonacci_v2++;
  if(n == 0 | n == 1) return n;
  if(memo.at(n) == -1)
    memo[n] = fibonacci_v2(n-1, memo) + fibonacci_v2(n-2, memo);
  return memo[n];
}

int fibonacci_v2(int n)
{
  std::vector<int> memo (n + 1,-1);
  return fibonacci_v2(n, memo);
}

// Bottom-up Dynamic Programming
static int calls_fibonacci_v3 = 0;

int fibonacci_v3(int n)
{
  if(n == 0 | n == 1) return n;
  int *memo = new int[n + 1];
  *(memo) = 0;
  *(memo + 1) = 1;
  for(int i = 2; i < n + 1; i++)
  {
    calls_fibonacci_v3++;
    *(memo + i) = *(memo + i - 1) + *(memo + i - 2);
  }
  int fib_n = *(memo + n);
  delete [] memo;
  return fib_n;
}

static int calls_fibonacci_v4 = 0;

int fibonacci_v4(int n)
{
  if(n == 0 | n == 1) return n;
  int n_2 = 0; // n - 2
  int n_1 = 1; // n - 1
  int fib_n = -1;
  for(int i = 2; i < n + 1; i++)
  {
    calls_fibonacci_v4++;
    fib_n = n_2 + n_1;
    n_2 = n_1;
    n_1 = fib_n;
  }
  return fib_n;
}

int main()
{
  int n = 11;
  std::cout << "n: " << n << std::endl;
  std::cout << "fibonacci_v1: " << std::endl;
  std::cout << "fib(n): " << fibonacci_v1(n) << std::endl;
  std::cout << "calls_fibonacci_v1: " << calls_fibonacci_v1 << std::endl;

  std::cout << "fibonacci_v2: " << std::endl;
  std::cout << "fib(n): " << fibonacci_v2(n) << std::endl;
  std::cout << "calls_fibonacci_v2: " << calls_fibonacci_v2 << std::endl;

  std::cout << "fibonacci_v3: " << std::endl;
  std::cout << "fib(n): " << fibonacci_v3(n) << std::endl;
  std::cout << "calls_fibonacci_v3: " << calls_fibonacci_v3 << std::endl;

  std::cout << "fibonacci_v4: " << std::endl;
  std::cout << "fib(n): " << fibonacci_v4(n) << std::endl;
  std::cout << "calls_fibonacci_v4: " << calls_fibonacci_v4 << std::endl;

  return 0;
}
