// https://projecteuler.net/problem=10
// Summation of primes
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
// Find the sum of all the primes below two million.

#include <iostream>

#include "sieve_eratos.h"

using namespace std;

int main(int argc, char* argv[] )
{
  CSieveOfEratosthenes* cs = new CSieveOfEratosthenes(20000000);
  if( 17 != cs->sum(10)){
    cerr << "Fail" << endl;
  }
  cout << "Answer: " << cs->sum(2000000) << endl;
}
