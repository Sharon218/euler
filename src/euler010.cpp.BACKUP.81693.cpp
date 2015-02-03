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
<<<<<<< HEAD

=======
>>>>>>> 18d0f4fd85c2f36e62e7c3eecfd088df96e863ab
int main(int argc, char* argv[] )
{
  std::cout << "Answer: " << summation_of_primes() << std::endl;
}
<<<<<<< HEAD

=======
>>>>>>> 18d0f4fd85c2f36e62e7c3eecfd088df96e863ab
#endif // #if ! defined UNITTEST_MODE
