// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

// 232792560

#include <iostream>

using namespace std;

uint32_t brute_force(uint32_t max)
{
  uint32_t answer = 0;
  uint32_t test = max;
  bool check = false;
  while( !check ){
    check = true;
    for( uint32_t i = max ; i && check ; --i){
      cout << test << ':' << i << endl;
      check &= (0 == (test%i));
    }
    if( !check ){
      test++;
    }
  }
  answer = test;
  return answer;
}

int main( int argc , char* argv[])
{
  if( 2520 == brute_force(10)){
    cout << brute_force(20)
;  }else{
    cerr << "Error" << endl;
  }
}
