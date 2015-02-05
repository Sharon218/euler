// https://projecteuler.net/problem=12
// The sequence of triangle numbers is generated by adding the natural numbers.
// So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28.
// The first ten terms would be:
//
// 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
//
// Let us list the factors of the first seven triangle numbers:
//
//  1: 1
//  3: 1,3
//  6: 1,2,3,6
// 10: 1,2,5,10
// 15: 1,3,5,15
// 21: 1,3,7,21
// 28: 1,2,4,7,14,28
//
// We can see that 28 is the first triangle number to have over five divisors.
//
// What is the value of the first triangle number to have over five hundred divisors?

// Answer: 76576500

#include <iostream>
#include <algorithm>

// @see http://en.wikipedia.org/wiki/Triangular_number
int triangle(int n)
{
  if( 1 == n ){
    return 3;
  }
  return ((n+1)*n)/2;
}

// Math fact: a prime decomposition n = Prod_i p_i^e_i yields
// Prod_i (e_i + 1) different divisors
int num_divisors(int n)
{
  int divisors = 1;

  // Evens
  {
    int count = 0;
    while ( 0 == (n % 2)) {
      ++count;
      n /= 2;
    }
    divisors *= (count + 1);
  }

  // Odds
  for (size_t i = 3; i <= n; i += 2){
    int count = 0;
    while ( 0 == (n % i) ) {
      ++count;
      n /= i;
    }
    divisors *= (count + 1);
  }

  return divisors;
}

int find_highest_divisible_triangular_number( int hurdle )
{
  int divisor_count = 0;
  int i = 1;

  while( divisor_count <= hurdle ){
    divisor_count = num_divisors(triangle(i));
    i++;
  }
  return triangle(i-1);
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << find_highest_divisible_triangular_number(500) << std::endl;
}
#endif // #if ! defined UNITTEST_MODE