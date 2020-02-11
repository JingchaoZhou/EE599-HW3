#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class Solution {
public:
  string print(vector<int> input);
  int first(vector<int> input);
  int last(vector<int> input);
  int findElement(vector<int> input,int curr,int i);
};

#endif