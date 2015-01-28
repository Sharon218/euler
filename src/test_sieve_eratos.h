#include "sieve_eratos.h"

namespace{

class TestSieveEratos : public testing::Test {
protected:
  TestSieveEratos() : m_sieve(0){

  }

  virtual void SetUp(){
    m_sieve = new CSieveOfEratosthenes(2000000);
  }

  virtual void TearDown(){
    delete m_sieve;
  }

  CSieveOfEratosthenes* m_sieve;
};

TEST_F(TestSieveEratos,KnownResult){
  EXPECT_EQ(17,m_sieve->sum(10));
}

};
