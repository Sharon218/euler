#include "euler002.cpp"  // TODO: Split and inline

namespace{
  TEST(Prob002,Know001){
    EXPECT_EQ(4613732,sum_even_fib(1000));
  }
};
