// https://projecteuler.net/problem=23
// Non-abundant sums

// A perfect number is a number for which the sum of its proper divisors is
// exactly equal to the number. For example, the sum of the proper divisors of
// 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.
//
// A number n is called deficient if the sum of its proper divisors is less
// than n and it is called abundant if this sum exceeds n.
//
// As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest
// number that can be written as the sum of two abundant numbers is 24.
// By mathematical analysis, it can be shown that all integers greater than
// 28123 can be written as the sum of two abundant numbers.
// However, this upper limit cannot be reduced any further by analysis even
// though it is known that the greatest number that cannot be expressed as the
// sum of two abundant numbers is less than this limit.
//
// Find the sum of all the positive integers which cannot be written as
// the sum of two abundant numbers.

// Answer: 4179871

#include <iostream>
#include <vector>
#include <cmath>

enum HOW_PERFECT
{
  PERFECT,
  DEFICIENT,
  ABUNDENT
};

HOW_PERFECT how_perfect(int number)
{
  int limit = sqrt((double)number);
  int sum = 1;

  for (int i=2; i<=limit; i++)
  {
    if (number % i == 0){
      sum += (i + number/i);
    }
  }

  std::cout << "how_perfect: " << number << " sum: " << number << std::endl;

  if(sum == number){
    return PERFECT;
  }if(sum > number){
    return DEFICIENT;
  }else{
    return ABUNDENT;
  }
}

int non_abundunt_sums(int max)
{
  std::vector<int> abundents;
  for( int i = 1 ; i <= max ; i++ ){

  }
  return 0;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << non_abundunt_sums(12) << std::endl;
}
#endif //#if ! defined UNITTEST_MODE
