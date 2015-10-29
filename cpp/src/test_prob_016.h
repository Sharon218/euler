#include "euler016.cpp"

namespace{
  TEST(Prob016,Know01){
    EXPECT_EQ(26,power_digit_sum(15));
  }
  TEST(Prob016,Answer){
    EXPECT_EQ(1366,power_digit_sum(1000));
  }
};
