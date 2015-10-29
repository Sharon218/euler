#include "euler006.cpp"

namespace{
  TEST(Prob006,Known001){
    EXPECT_EQ(2640,sum_squares(10));
  }

  TEST(Prob006,Known002){
    EXPECT_EQ(25164150,sum_squares(100));
  }
};
