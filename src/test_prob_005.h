#include "euler005.cpp"  // TODO: Split and inline

namespace{

  TEST(Prob005,Known001){
    EXPECT_EQ(2520,prob005_brute_force(10));
  }

  TEST(Prob005,Answer){
    EXPECT_EQ(232792560,prob005_brute_force(20));
  }

};
