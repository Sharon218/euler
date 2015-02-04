// https://projecteuler.net/problem=7

// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
// we can see that the 6th prime is 13.
//
// What is the 10001st prime number?

// Answer: 104743

#include <iostream>
#include <memory>

#include "sieve_eratos.h"

int nth_prime(size_t nth)
{
  std::unique_ptr<CSieveOfEratosthenes> sieve(new CSieveOfEratosthenes(110000));
  if( sieve ){
    return sieve->get_nth(nth);
  }
  return 0;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << nth_prime(10001) << std::endl;
}
#endif
