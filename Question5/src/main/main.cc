#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  AcadamicRecord obj = AcadamicRecord(90,80,70);
  
  obj++;
  cout << obj.print();

  return EXIT_SUCCESS;
}