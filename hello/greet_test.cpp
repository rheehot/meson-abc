#include "pch/my_pch.h"
#include "gtest/gtest.h"


TEST(GreetTest, TestGreetWithName) {
  ASSERT_EQ("Hello, World!", greet("World"));
}

/*
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
*/
