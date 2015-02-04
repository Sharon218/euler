#include "euler012.cpp"

namespace{
  TEST(Prob012,Answer){
    EXPECT_EQ(70600674,largest_grid_product_brute());
  }
};
