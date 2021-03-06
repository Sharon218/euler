// https://projecteuler.net/problem=2

// Each new term in the Fibonacci sequence is generated by adding the
// previous two terms. By starting with 1 and 2, the first 10 terms will be:
//
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
// By considering the terms in the Fibonacci sequence whose values do not
// exceed four million, find the sum of the even-valued terms.

// Answer: 4613732

#include <iostream>

using namespace std;

int sum_even_fib(size_t upper)
{
  long fib1 = 1;
  long fib2 = 1;
  long result = 0;
  long summed = 0;

  while (result < upper) {
    if ((result % 2) == 0) {
      summed += result;
    }

    result = fib1 + fib2;
    fib2 = fib1;
    fib1 = result;
  }
  return summed;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  cout << "Answer: " << sum_even_fib(4000000) << endl;
}
#endif
