#include "euler021.cpp"

namespace{
  TEST(Prob021,Answer){
    EXPECT_EQ(31626,amicable_numbers_sum(10000));
  }
};
