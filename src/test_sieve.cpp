#include "sieve_eratos.h"

namespace{

  class CTestSieveEratos : public ::testing::Test{
    public:
      CTestSieveEratos() : m_sieve(2000000){}
    protected:
      CSieveOfEratosthenes m_sieve;
  };

  TEST(CTestSieveEratos, TenTest) {
    EXPECT_EQ(17,m_sieve.sum(10))
  };

};
