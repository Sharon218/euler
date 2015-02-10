#include "euler015.cpp"

namespace{
  TEST(Prob015,Know001){
    EXPECT_EQ(6,lattice_path_brute(2));
  }
};
