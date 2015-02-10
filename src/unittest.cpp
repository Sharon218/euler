#include <iostream>
#include <gtest/gtest.h>

#define UNITTEST_MODE 1 // Exclude local main mostly

#include "test_sieve_eratos.h"
#include "test_prob_001.h"
#include "test_prob_002.h"
#include "test_prob_003.h"
#include "test_prob_004.h"
#include "test_prob_005.h"
#include "test_prob_006.h"
#include "test_prob_007.h"
#include "test_prob_008.h"
#include "test_prob_009.h"
#include "test_prob_010.h"
#include "test_prob_011.h"
#include "test_prob_012.h"
#include "test_prob_013.h"
#include "test_prob_014.h"

int main(int argc, char* argv[] )
{
  ::testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
