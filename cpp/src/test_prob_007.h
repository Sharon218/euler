#include "euler007.cpp"

namespace{
  TEST(Prob007,Known001){
    EXPECT_EQ(13,nth_prime(6));
  }

  TEST(Prob007,Answer){
    EXPECT_EQ(104743,nth_prime(10001));
  }
};
