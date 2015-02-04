#include "euler004.cpp"

namespace{
  TEST(Prob004,PalindromeGood001){
    EXPECT_TRUE(palindrome_test(12321));
  }

  TEST(Prob004,PalindromeBad001){
    EXPECT_FALSE(palindrome_test(1234));
  }

  TEST(Prob004,Answer){
    EXPECT_EQ(906609,prob004_brute_force());
  }
};
