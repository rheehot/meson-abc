#include "pch/my_pch.h"
#include "gtest/gtest.h"


TEST(Xxh64IntTest, TestInt)
{
  XXH64_state_t* const state = XXH64_createState();
  ASSERT_NE(state, nullptr);

  if (XXH64_reset(state, 0) == XXH_ERROR)
  {
    ASSERT_TRUE(false);
  }

  // TODO

  XXH64_freeState(state);
}


/*
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
*/

