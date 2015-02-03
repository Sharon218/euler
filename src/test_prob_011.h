#include "euler011.cpp"  // TODO: Split and inline

namespace{
  TEST(Prob011,Answer){
    EXPECT_EQ(70600674,largest_grid_product_brute());
  }
};
