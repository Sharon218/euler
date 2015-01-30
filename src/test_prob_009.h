#include "euler009.cpp"  // TODO: Split and inline

namespace{
  TEST(Prob009,Known001){
    EXPECT_EQ(31875000,special_pyg_brute());
  }

  TEST(Prob009,Known002){
    EXPECT_EQ(31875000,special_pyg_opt());
  }
};
