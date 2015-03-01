// https://projecteuler.net/problem=21
// Amicable numbers

// Let d(n) be defined as the sum of proper divisors of n (numbers less than n
// which divide evenly into n).
// If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and
// each of a and b are called amicable numbers.
//
// For example, the proper divisors of
// 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284.
// The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
//
// Evaluate the sum of all the amicable numbers under 10000.

// Answer: 31626

#include <iostream>

int amicable_numbers_sum(int max)
{
  int a = 0;
  int b = 0;
  int amic_sum = 0;

  for( int i = 1; i <= max ;i++){
    // std::cout << "i: " << i << std::endl;

    a = 0;
    for(int j = 1 ; j < i ; j++){
      if( 0 == (i%j)){
        a += j;
      }
    }

    b = 0;
    for( int k = 1 ; k < a ; k++ ){
      // std::cout << "k: " << k << std::endl;
      if( 0 == (a%k)){
        b += k;
      }
    }

    if( b == i && b != a ){
      amic_sum += i;
    }

    // std::cout << "Sum A: " << a << std::endl;
    // std::cout << "Sum B: " << b << std::endl;
    // std::cout << "Amic: " << amic_sum << std::endl;
  }

  return amic_sum;
}


#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[]) {
  std::cout << "Answer: " << amicable_numbers_sum(10000) << std::endl;
}
#endif //#if ! defined UNITTEST_MODE
