#include "euler014.cpp"

namespace{
  TEST(Prob014,Known001){
    EXPECT_EQ(10 , count_collatz_terms_opt(13));
  }
  TEST(Prob014,Known002){
    EXPECT_EQ(10 , count_collatz_terms_brute(13));
  }
  TEST(Prob014,Answer1){
    EXPECT_EQ(837799 , longest_collatz_sequence_brute(1000000));
  }
  TEST(Prob014,Answer2){
    EXPECT_EQ(837799 , longest_collatz_sequence_opt(1000000));
  }
};
