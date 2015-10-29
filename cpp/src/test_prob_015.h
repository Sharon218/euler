#include "euler015.cpp"

namespace{
  TEST(Prob015,Know001){
    EXPECT_EQ(6,lattice_path(2));
  }
  TEST(Prob015,Answer){
    EXPECT_EQ(137846528820,lattice_path(20));
  }
};
