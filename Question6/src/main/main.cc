#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  Solution s;
  int c = 0;
  int i = 0;
  int curr = 0;
  int index = 0;
  vector <int> input = {1,4,5,23,100,12,18,175};
  while(c != 5){
  cout << "Vector: " << s.print(input);
  cout << "Please choose any of the following options: " << endl;
  cout << "     1. What is the first element?" << endl;
  cout << "     2. What is the last element?" << endl;
  cout << "     3. What is the current element?" << endl;
  cout << "     4. What is the ith element from the current location?" << endl;
  cout << "     5. Exit." << endl;

  cin >> c;
  switch(c){
    case 1: cout << "Output: " << s.first(input) << endl;
            curr = s.first(input);
            break;
    case 2: cout << "Output: " << s.last(input) << endl;
            curr = s.last(input);
            break;
    case 3: cout << "Output: " << curr << endl;
            break;
    case 4: cout << "Enter the value of i:: "<< endl;
            cin >> i;
            while(i<0){
              cout << "i cannot be negative, please enter again" << endl;
              cin >> i;
            }
            index = distance(input.begin(),find(input.begin(),input.end(),curr));
            if((index + i) > (input.size()-1)){
              cout << "Sorry! You cannot traverse " << i << " elements from your current location" << endl;
              break;
            }
            cout << "Output: " << s.findElement(input,curr,i) << endl;
            curr = s.findElement(input,curr,i);
            index = 0;
            break;
    case 5: cout << "Exit!" << endl;
            break;
    }
  }
  return EXIT_SUCCESS;
}