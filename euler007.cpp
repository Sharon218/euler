// https://projecteuler.net/problem=7

// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
// we can see that the 6th prime is 13.
//
// What is the 10001st prime number?

#include <iostream>

using namespace std;

class Cbool
{
  bool m_value;
public:
  Cbool()
  {
    m_value = false;
  }

  bool const& operator()()const
  {
    return m_value;
  }

  void operator()(bool const& a_new)
  {
    m_value = a_new;
  }
};

class CSieve
{
  Cbool* [] m_flags;
  size_t  m_num_flags;

public:
  explicit CSieve(size_t num_flags) : m_num_flags(num_flags)
  {
    m_flags = new Cboo[num_flags];
    for (size_t i = 0;  i < m_num_flags; ++i) {
      mark_multiple(i+1);
    }
  }

  void mark_multiple( uint32_t mark_me )
  {
    if( mark_me >= 2 )
    {
      // cout << "Mark: " << mark_me << endl;
      uint32_t i = 1;
      uint32_t idx;
      while ( (idx = (mark_me*i)) <= m_num_flags) {
        // cout << "Idx: " << idx << endl;
        m_flags[idx-1] = true;
        ++i;
      }
    }
    return;
  }

  void dump(void)
  {
    if( null != m_flags ){
      for (size_t i = 0;  < m_num_flags; ++i) {
        if( m_flags[i]){
          cout << "Prime: " << i << endl;
        }
      }
    }
  }

  virtual ~CSieve()
  {
    delete [] m_flags;
  }
protected:
private:

};


int main( int argc , char* argv[])
{
  auto_ptr<CSieve> cs( new CSieve(10));
  if( null != cs ){
    cs->dump();
  }
}
