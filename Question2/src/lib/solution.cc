#include "solution.h"

vector<int> Solution::twoSum(vector<int>& nums, int target) { 
  int i,j;
  vector<int> result;
  for (i = 0;i<nums.size();i++){
      for(j = i+1; j<nums.size();j++){
          if (target == nums[i]+nums[j]){
              int myints[] = {i,j};
              result.assign(myints,myints+2);
              continue;}
          else
              continue;
      }
  }
  return result;
}//Time complexity = O(n^2)


