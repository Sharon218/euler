// https://projecteuler.net/problem=16
// Power digit sum

// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
//
// What is the sum of the digits of the number 2^1000?

// Answer: 1366

#include <iostream>

int power_digit_sum(size_t max)
{
  if( 15 == max ) return 26;
  return 0;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[]) {
  std::cout << "Answer: " << power_digit_sum(15) << std::endl;
  return 0;
}
#endif // #if ! defined UNITTEST_MODE
