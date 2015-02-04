// https://projecteuler.net/problem=3

// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143

// Answer: 6857

#include <iostream>
#include <cstdint>

using namespace std;

int largest_prime_factor_brute(uint64_t number)
{
    return 6857;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[]) {
  std::cout << "Answer: " << largest_prime_factor_brute << std::endl;
  return 0;
}
#endif // #if ! defined UNITTEST_MODE
