#include "euler010.cpp"  // TODO: Split and inline

namespace{
  TEST(Prob010,Answer){
    EXPECT_EQ(142913828922,summation_of_primes());
  }
};
