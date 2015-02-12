// https://projecteuler.net/problem=16
// Power digit sum

// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
//
// What is the sum of the digits of the number 2^1000?

// Answer: 1366

#include <iostream>
#include <vector>
#include <sstream>

int power_digit_sum(size_t max)
{
  std::vector<int> numbers;
  numbers.push_back(1);

  std::cout << std::endl;

  for (size_t i = 0; i < max; i++) {
    int carry = 0;
    std::for_each(numbers.begin(),numbers.end(),[&carry](int&  n){
      n *= 2;
      std::cout << "1) n*=2:" << n << std::endl;
      n += carry;
      std::cout << "2) n += carry:" << n << std::endl;
      if( n >= 10 ) carry = 1;
      std::cout << "3) carry:" << carry << std::endl;
      n -= (carry * 10);
      std::cout << "4) n -= (carry * 10):" << n << std::endl;
    });

    std::cout << i << "----------------" << carry << std::endl;

    for (auto itr = numbers.rbegin() ; itr != numbers.rend() ; itr++) {
      std::cout << *itr;
    }
    std::cout << std::endl << "--------------------"<< std::endl;


    if( 0 != carry ){
      numbers.push_back(carry);
    }
  }

  int total = 0;

  for (auto itr = numbers.rbegin() ; itr != numbers.rend() ; itr++) {
    total += *itr;
  }

  return total;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[]) {
  std::cout << "Answer: " << power_digit_sum(15) << std::endl;
  return 0;
}
#endif // #if ! defined UNITTEST_MODE
