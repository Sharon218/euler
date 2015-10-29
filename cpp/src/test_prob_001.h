#include "euler001.cpp"

namespace{
  TEST(Prob001,Know001){
    EXPECT_EQ(23,sum_natural_35(10));
  }

  TEST(Prob001,Answer){
    EXPECT_EQ(233168,sum_natural_35(1000));
  }
};
