// 1) You have a grid/2D array (m x n) with [0..m-1][0..n-1].
// The values are 0 if the cell cannot be explored and 1 if the cell
// can be passed through.  Given this grid, start from [0,0],
// and find the number of paths to [m-1][n-1].  What is the runtime?


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

static const int g_dim = 20;

class Cgrid
{
public:
  Cgrid(int a_dim) : m_dim(a_dim)
  {}

  virtual Cgrid()
  {
    delete [] m_map;
  }

protected:
private:

  void init(void)
  {
    delete [] m_map;
    m_map = new vector<vector<int> > >;
    for( int m = 0 ; m < g_dim ; m++ ){
      for( int n = 0; n < g_dim ; n++ ){
        m_map[m][n] = rand() % 2;
      }
    }
  }

  vector<vector<int> > >* m_map;
  //bool* m_map;
  int m_dim;

};

int brute_force(void)
{
  Cgrid grid = new Cgrid[g_dim][g_dim];

}

int main( int argc , char* argv[] )
{
  srand(time(0));
  cout << "Answer: " << brute_force() << endl;

}
