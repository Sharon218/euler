#define UNITTEST_MODE 1
#include "euler001.cpp"  // TODO: Split and inline

namespace{
  TEST(Prob001,Know001){
    EXPECT_EQ(23,sum_natural_35(10));
  }

  TEST(Prob001,Know002){
    EXPECT_EQ(233168,sum_natural_35(1000));
  }
};
