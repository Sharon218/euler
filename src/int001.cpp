// You have a grid/2D array (m x n) with [0..m-1][0..n-1].
// The values are 0 if the cell cannot be explored and 1 if the cell
// can be passed through.  Given this grid, start from [0,0],
// and find the number of paths to [m-1][n-1].  What is the runtime?

// NB Note is is *NOT* square

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

class Cgrid
{
public:
  Cgrid(int a_m, int a_n) : m_m(a_m), m_n(a_n)
  {
    m_map = new bool(a_m*a_n);
  //  for(int i = m_m; --m_m;)
  }

  virtual ~Cgrid()
  {
  }

protected:
private:

  int m_m;
  int m_n;

  void init(void)
  {
  }

  bool* m_map;
};

int brute_force(void)
{
//  Cgrid grid(20,20);
return 0;
}

int main( int argc , char* argv[] )
{
  double duration;
  int m = 100;
  int a[100];
  static const int ITER = 100000;

  // cout << "Start------------------" << endl;
  // for(int i = 0 ; i < m ; i++ ){
  //   cout << "i: " << i << ':' << static_cast<int>(a[i]) << ',';
  // }
  // cout << endl;

  std::clock_t start;

  start = clock();
  for( int i = 0 ; i < 100000 ; i++ )
  {
    for_each(a,a+m,[](int& a){a = 5;});
  }
  duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  cout << "Duration lamba: " << duration << endl;

  // cout << "2------------------" << endl;
  // for(int i = 0 ; i < m ; i++ ){
  //   cout << "i: " << (int)i << ':' << static_cast<int>(a[i]) << ',';
  // }
  // cout << endl;

  start = clock();
  for( int j = 0 ; j < 100000 ; j++ )
  {
    for(int i = (m+1) ; --i ;  ){
      a[i-1] = 6;
    }
  }
  duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  cout << "Duration backward loop: " << duration << endl;

  start = clock();
  for( int j = 0 ; j < 100000 ; j++ )
  {
    for(int i = m ; i-- ;  ){
      a[i] = 6;
    }
  }
  duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  cout << "Duration backward(2) loop: " << duration << endl;

  start = clock();
  for( int j = 0 ; j < 100000 ; j++ )
  {
    for(int i = 0 ; i < m ; i++  ){
      a[i] = 6;
    }
  }
  duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  cout << "Duration forward loop: " << duration << endl;

  // cout << "3------------------" << endl;
  // for(int i = 0 ; i < m ; i++ ){
  //   cout << "i: " << (int)i << ':' << static_cast<int>(a[i]) << ',';
  // }
  // cout << endl;

  srand(time(0));
  cout << "Answer: " << brute_force() << endl;
}
