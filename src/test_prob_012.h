#include "euler012.cpp"

namespace{
  TEST(Prob012,Know001){
    EXPECT_EQ(28,find_highest_divisible_triangular_number(5));
  }

  TEST(Prob012,Answer){
    EXPECT_EQ(76576500,find_highest_divisible_triangular_number(500));
  }
};
