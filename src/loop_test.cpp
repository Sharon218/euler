#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

int main( int argc , char* argv[] )
{
  double duration;
  int m = 100;
  int a[100];
  static const int ITER = 1000000;

  std::clock_t start;

  start = clock();
  for( int i = 0 ; i < ITER ; i++ )
  {
    for_each(a,a+m,[](int& a){a = 5;});
  }
  duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  cout << "Duration lamba: " << duration << endl;

  start = clock();
  for( int j = 0 ; j < ITER ; j++ )
  {
    for(int i = (m+1) ; --i ;  ){
      a[i-1] = 6;
    }
  }
  duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  cout << "Duration backward loop: " << duration << endl;

  start = clock();
  for( int j = 0 ; j < ITER ; j++ )
  {
    for(int i = m ; i-- ;  ){
      a[i] = 6;
    }
  }
  duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  cout << "Duration backward(2) loop: " << duration << endl;

  start = clock();
  for( int j = 0 ; j < ITER ; j++ )
  {
    for(int i = 0 ; i < m ; i++  ){
      a[i] = 6;
    }
  }
  duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  cout << "Duration forward loop: " << duration << endl;
}
