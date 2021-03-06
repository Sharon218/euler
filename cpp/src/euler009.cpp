// https://projecteuler.net/problem=9
// Answer: 31875000
// a:200 b:375 c:425

// Special Pythagorean triplet

// Problem 9

// A Pythagorean triplet is a set of three natural numbers, a < b < c,
// for which,
//
// a^2 + b^2 = c^2
//
// For example, (3^2 + 4^2) = (9 + 16) = 25 = 5^2.
//
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>

using namespace std;

int special_pyg_brute()
{
  for(int a = 500; --a; ){
    for(int b = 500; --b; ){
      int c = 1000 - b - a;
      if( a < b && (0==(a*a)+(b*b)-(c*c)) ){
        return a*b*c;
      }
    }
  }
  return 0;
}

const static int g_n = 1000;

int special_pyg_opt()
{
  // Take advantage of the actual maximum range
  // i.e. a can only have a maximum value of n/3 to
  // satisfy a < b < c && (a+b+c)==n
  for(int a = (g_n/3); --a; ){
    for(int b = (g_n/2); --b; ){
      int c = g_n - b - a;
      if( (a*a)+(b*b) == (c*c) ){
        return a*b*c;
      }
    }
  }
  return 0;
}

#if ! defined UNITTEST_MODE
int main(int argc, char const *argv[])
{
  std::cout << "Answer: " << special_pyg_brute() << std::endl;
  std::cout << "Answer: " << special_pyg_opt() << std::endl;
}
#endif
