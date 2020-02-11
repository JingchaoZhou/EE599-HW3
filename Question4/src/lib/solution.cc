#include "solution.h"
#include "iostream"

bool Solution::checkValidity(string input) { 
  stack<char> s;
  char x;

  for (int i = 0; i<input.size();i++){
    if ((input[i] == '(' )|| (input[i] == '[' )|| (input[i] == '{' )){
      s.push(input[i]);
    }

    if (s.empty()){
      return false;
    }

    switch (input[i])
    {
      case ')':
      x = s.top();
      s.pop();
      if (x=='{' || x=='[') 
      return false; 
      break; 

      case '}':
      x = s.top(); 
      s.pop(); 
      if (x=='(' || x=='[') 
          return false; 
      break; 

      case ']': 
      x = s.top(); 
      s.pop(); 
      if (x =='(' || x == '{') 
          return false; 
      break; 
    }
  }
  
  return s.empty();
 }//time complexity O(n)

