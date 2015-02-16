#include "euler018.cpp"

namespace{
  TEST(Prob018,Know001){
    EXPECT_EQ(23,maximum_path_sum_1(4));
  }
  TEST(Prob018,Answer){
    EXPECT_EQ(1074,maximum_path_sum_1(4));
  }
};
