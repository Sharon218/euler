#include "euler017.cpp"

namespace{
  TEST(Prob017,Know001){
    g_letter_count = 0;
    mp_for<1,6>()();
    EXPECT_EQ(19,g_letter_count);
  }
  TEST(Prob017,Answer){
    g_letter_count = 0;
    mp_for<1,1001>()();
    EXPECT_EQ(21124,g_letter_count);
  }
};
