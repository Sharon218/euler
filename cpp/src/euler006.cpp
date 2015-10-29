// https://projecteuler.net/problem=6

// The sum of the squares of the first ten natural numbers is,
//
// 1^2 + 2^2 + ... + 10^2 = 385
// The square of the sum of the first ten natural numbers is,
//
// (1 + 2 + ... + 10)^2 = 55^2 = 3025
// Hence the difference between the sum of the squares of the first ten
// natural numbers and the square of the sum is 3025 − 385 = 2640.
//
// Find the difference between the sum of the squares of the first one
// hundred natural numbers and the square of the sum.

// Answer: 25164150

#include <iostream>

int sum_squares(size_t size)
{
  int sum_square = 0;
  int square_sum = 0;

  for(size_t i = (size+1); --i ;)
  {
    sum_square += (i*i);
    square_sum += i;
  }

  return ((square_sum*square_sum) - sum_square);
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << sum_squares(100) << std::endl;
}
#endif
