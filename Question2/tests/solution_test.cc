#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TwoSumsTester, emptyResult) {
  Solution solution;
  vector<int> nums = {3,7,11,15};
  int sum = 180;
  std::vector<int> actual = solution.twoSum(nums,sum);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(TwoSumsTester, trueResult) {
  Solution solution;
  vector<int> nums = {3,7,11,15};
  int sum = 10;
  std::vector<int> actual = solution.twoSum(nums,sum);
  std::vector<int> expected = {0,1};
  EXPECT_EQ(expected, actual);
}

