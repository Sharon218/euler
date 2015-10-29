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

TEST_F(TestSieveEratos,Known001){
  EXPECT_EQ(17,m_sieve->sum(10));
}

TEST_F(TestSieveEratos,Known002){
  EXPECT_EQ(142913828922,m_sieve->sum(2000000));
}

TEST_F(TestSieveEratos,Known003){
  EXPECT_EQ(13,m_sieve->get_nth(6));
}

TEST_F(TestSieveEratos,Known004){
  EXPECT_EQ(104743,m_sieve->get_nth(10001));
}


};
