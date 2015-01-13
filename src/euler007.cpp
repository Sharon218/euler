// https://projecteuler.net/problem=7

// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
// we can see that the 6th prime is 13.
//
// What is the 10001st prime number?

// Answer: 104743

#include <iostream>
#include <vector>

#include <cmath>

using namespace std;

// Input: an integer n > 1
//
// Let A be an array of Boolean values, indexed by integers 2 to n,
// initially all set to true.
//
// for i = 2, 3, 4, ..., not exceeding √n:
// if A[i] is true:
// for j = i2, i2+i, i2+2i, ..., not exceeding n :
// A[j] := false
//
// Output: all i such that A[i] is true.

// @see http://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
class CSieveOfEratosthenes
{
public:
  CSieveOfEratosthenes(int a_upper = 0) : m_upper(a_upper), m_primes(nullptr)
  {
    init();
  }

  virtual ~CSieveOfEratosthenes()
  {

  }

  int get_nth(int a_pos)
  {
    int value = 0;
    int count = a_pos;
    size_t i = 0;
    for ( i = 0; i < m_primes->size() && a_pos ; i++) {
      // cout << "O: " << i << endl;
      if( true == (*m_primes)[i] ){
        // cout << "    **" << endl;
        value = i;
        a_pos--;
      }
    }

    if( a_pos == 0 ){
      return value;
    }else{
      return 0;
    }
  }

  void dump(void)
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

protected:
  void init()
  {
    delete [] m_primes;

    if( m_upper <= 0 )
    {
      return;
    }

    int sqrtupper = (int)floor(sqrt(m_upper));

    m_primes = new vector<bool>(m_upper,true);

    (*m_primes)[0] = false;
    (*m_primes)[1] = false;

    for (size_t i = 2; i <= sqrtupper ; i++ ) {
      // cout << "O:" << i << endl;
      if( true == (*m_primes)[i]){
        for (size_t j = (i*i); j < m_upper; j += i ) {
          // cout << "    I:" << j << endl;
          (*m_primes)[j] = false;
        }
      }
    }
  }

private:
  int m_upper;
  vector<bool>*  m_primes;
};

int main( int argc , char* argv[])
{
  CSieveOfEratosthenes* sieve = new CSieveOfEratosthenes(110000);
  sieve->dump();

  int find_me = 10001;
  cout << "Nth: " << find_me << '=' << sieve->get_nth(find_me) << endl;
}
