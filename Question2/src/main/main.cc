#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  Solution s;
  vector<int> nums = {1,4,3,2};

  vector<int> n =  s.twoSum(nums,5);

  for (int i = 0; i < n.size();i++){
    cout << n[i]<< endl; 
  }


  return EXIT_SUCCESS;
}