// https://projecteuler.net/problem=7

// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
// we can see that the 6th prime is 13.
//
// What is the 10001st prime number?

// Answer: 104743

#include <iostream>
#include "sieve_eratos.h"

using namespace std;

int main( int argc , char* argv[])
{
  CSieveOfEratosthenes* sieve = new CSieveOfEratosthenes(110000);
  sieve->dump();

  int find_me = 10001;
  cout << "Nth: " << find_me << '=' << sieve->get_nth(find_me) << endl;
}
