// Implement a stack.
// What can you add to this stack to get the minimum value in constant time?

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <limits>

static const int max_stack_size = 100;

class CSimpleStack
{
public:

  CSimpleStack() : m_idx(0),
                    m_size(max_stack_size),
                    m_stack(0)
  {

  }

  virtual ~CSimpleStack()
  {
    delete m_stack;
  }

  virtual void push(int value)
  {
    if( 0 == m_stack ){
      reset();
    }
    m_stack[m_idx++] = value;
  }

  virtual int pop()
  {
    if( 0 == m_stack ){
      reset();
      return -1;
    }
    return m_stack[m_idx--];
  }

  virtual int peek()
  {
    if( 0 == m_stack ){
      reset();
      return -1;
    }
    return m_stack[m_idx];
  }

  virtual size_t size()
  {
    return m_idx;
  }

  virtual int min()
  {
    int ret = std::numeric_limits<int>::max();
    for( int i = 0 ; i < m_idx ; i++ ){
      if( m_stack[i] < ret ){
        ret = m_stack[i];
      }
    }
    return ret;
  }

protected:

  /**
   * Overloaded << operator for streaming the object (tostring)
   * @param   const ostream&
   */
  friend std::ostream& operator<<(
                            std::ostream& ostr,     /// <- What to stream to
                            const CSimpleStack&  ss  /// <- What are we streaming
                            )
  {
    ostr << "Idx: " << ss.m_idx << std::endl;
    ostr << "Cap: " << ss.m_size << std::endl;
    // ostr << "Stack: " << ss.m_stack << std::endl;

    // for( int i = 0 ; i < ss.m_size ; i++ ){
    //   if( i && (0==(i%10))) {
    //     ostr << std::endl;
    //   }
    //
    //   if( i < ss.m_idx ){
    //     ostr << '*';
    //   }else{
    //     ostr << '-';
    //   }
    //   ostr << std::setw(4)
    //           << std::setfill('0')
    //           << i << ':'
    //           << std::setw(4)
    //           << std::setfill('0')
    //           << ss.m_stack[i]
    //           << ' ';
    // }
    // ostr << std::endl;
    return ostr;
  }

private:
  void reset()
  {
    std::cerr << "Reset called: " << m_size << std::endl;
    // Probably not necessary
    if( 0 == m_stack ){
      m_stack = new int(m_size);
      // TODO: Catch this
    }
    std::for_each( m_stack , m_stack + m_size , [](int& a){a=0;});
    m_idx = 0;
  }

  int m_idx;
  size_t m_size;
  int* m_stack;
};

class CSimpleStackOpt : public CSimpleStack
{
public:
  CSimpleStackOpt() : CSimpleStack(){}

  void push(int value)
  {
    std::cerr << "Value: " << value << std::endl;
    if( value < m_min_stack.peek() ){
      m_min_stack.push(value);
    }
    CSimpleStack::push(value);
  }

  int pop()
  {
    int ret = CSimpleStack::pop();
    if( ret == m_min_stack.peek() ){
      m_min_stack.pop();
    }
    return ret;
  }

  int min()
  {
    return m_min_stack.peek();
  }

  CSimpleStack m_min_stack;
};

int main( int argc, char* argv[] )
{
  double duration;
  std::clock_t start;
  static const int ITER = 1000000;

  std::srand(std::time(0));

  CSimpleStackOpt cso;
  CSimpleStack cs;

  cso.push(100);
  std::cout << cs;

  // for( int i = 0 ; i < 500 ; i++ )
  // {
  //   int x = ( rand() % 100 );
  //   cso.push(x);
  //   cs.push(x);
  // }
  //
  // int y = 0;
  // start = clock();
  // for( int i = 0 ; i < ITER ; i++ )
  // {
  //   y = cso.min();
  // }
  // duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  // std::cout << "Duration CSO: " << duration << std::endl;
  // std::cout << "CSO: " << y << std::endl;
  //
  // start = clock();
  // for( int i = 0 ; i < ITER ; i++ )
  // {
  //   int y = cso.min();
  // }
  // duration = (clock() - start) / (double) CLOCKS_PER_SEC;
  // std::cout << "Duration CS: " << duration << std::endl;
  // std::cout << "CS: " << y << std::endl;


}
