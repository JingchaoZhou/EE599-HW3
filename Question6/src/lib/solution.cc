#include "solution.h"

string Solution::print(vector<int> input) { 
  string a = {};
  for (int i = 0; i < input.size();i++){
    a = a + to_string(input[i]) + " ";
  }
  return a;
 }

int Solution::first(vector<int> input){
vector<int>::iterator ptr = input.begin();
return *ptr;
}

int Solution::last(vector<int> input){
vector<int>::iterator ptr = input.end() - 1;
return *ptr;
}

int Solution::findElement(vector<int> input,int curr,int i){
  vector<int>::iterator ptr1 = find(input.begin(),input.end(),curr);
  advance(ptr1,i);
return *ptr1;
}