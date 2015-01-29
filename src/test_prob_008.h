#include "euler008.cpp"  // TODO: Split and inline

namespace{
  TEST(Prob008,Known001){
    EXPECT_EQ(5832,largest_product_brute(4));
  }
  TEST(Prob008,Known002){
    EXPECT_EQ(5832,largest_product_opt<4>());
  }
  TEST(Prob008,Answer001){
    EXPECT_EQ(23514624000,largest_product_brute(13));
  }
  TEST(Prob008,Answer002){
    EXPECT_EQ(23514624000,largest_product_opt<13>());
  }
};
