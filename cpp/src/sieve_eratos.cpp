#include "sieve_eratos.h"

#include <iostream>

using namespace std;

void CSieveOfEratosthenes::dump(void)
{
  cout << "Sieve dump" << endl;
  cout << "Upper: " << m_upper << endl;

  for (size_t i = 0; i < m_primes->size() ; i++) {
    if( true == (*m_primes)[i] ){
      cout << i << ',';
    }
  }
  cout << endl;
}
