// https://projecteuler.net/problem=10
// Summation of primes
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
// Find the sum of all the primes below two million.

// Answer: 142913828922

#include <iostream>
#include <memory>

#include "sieve_eratos.h"

uint64_t summation_of_primes()
{
  CSieveOfEratosthenes cs(2000000);
  return cs.sum(2000000);
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << summation_of_primes() << std::endl;
}
#endif // #if ! defined UNITTEST_MODE
