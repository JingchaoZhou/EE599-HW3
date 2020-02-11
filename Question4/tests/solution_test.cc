#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(validCheck, numsTrue) {
  Solution solution;
  bool actual = solution.checkValidity("{[923sfg]}");
  EXPECT_EQ(true, actual);
}

TEST(validCheck, numsfalse) {
  Solution solution;
  bool actual = solution.checkValidity("{[92}");
  EXPECT_EQ(false, actual);
}

TEST(validCheck, empty) {
  Solution solution;
  bool actual = solution.checkValidity("");
  EXPECT_EQ(true, actual);
}