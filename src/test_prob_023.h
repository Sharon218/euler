#include "euler023.cpp"

namespace{
  TEST(Prob023,Answer){
    EXPECT_EQ(4179871,non_abundunt_sums(12));
  }
  // TEST(Prob023,SumF001){
  //   EXPECT_EQ(16,sum_factors(12));
  // }
  // TEST(Prob023,HowPerfect001){
  //   EXPECT_EQ(ABUNDENT,how_perfect(12));
  // }
  TEST(Prob023,HowPerfect002){
    EXPECT_EQ(PERFECT,how_perfect(19));
  }
  TEST(Prob023,HowPerfect003){
    EXPECT_EQ(PERFECT,how_perfect(6));
  }
};
