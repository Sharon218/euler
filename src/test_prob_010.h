#include "euler010.cpp"  // TODO: Split and inline

namespace{
  TEST(Prob010,Answer){
    EXPECT_EQ(31875000,special_pyg_opt());
  }
};
