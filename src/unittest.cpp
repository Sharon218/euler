#include <iostream>
#include <gtest/gtest.h>

#define UNITTEST_MODE 1 // Exclude local main mostly

#include "test_sieve_eratos.h"
#include "test_prob_001.h"
#include "test_prob_002.h"
#include "test_prob_003.h"
#include "test_prob_004.h"

int main(int argc, char* argv[] )
{
  ::testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
