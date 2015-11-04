// https://projecteuler.net/problem=4

// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

// Answer: 906609
#include <iostream>
#include <cstdint>

using namespace std;

bool palindrome_test(uint64_t test_me)
{
  uint64_t reversed = 0;
  uint64_t original = test_me;

  //cout << test_me << endl;

  while( 0 < original ){
    reversed = reversed * 10 + (original % 10);
    original /= 10;
  }

  return (test_me == reversed);
}

uint64_t prob004_brute_force()
{
  uint32_t max_pali = 0;
  for( uint32_t i = 999 ; --i > 100 ;){
    for( uint32_t j = 999 ; --j > 100;){
      uint64_t t = i*j;
      if(palindrome_test(t)){
        if( t > max_pali ){
          max_pali = t;
        }
      }
    }
  }
  return max_pali;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  cout << prob004_brute_force() << endl;
}
#endif // UNITTEST_MODE
