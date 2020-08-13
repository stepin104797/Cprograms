#include "unity.h"
#include "prime.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime()
{
  TEST_ASSERT_EQUAL("True", 13);
  TEST_ASSERT_EQUAL("False", 33);
}

 int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_prime);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
