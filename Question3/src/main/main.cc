#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>

int main() {
  SinglyLinkedList list;
  list.push_front(1);
  list.push_front(3);
  list.push_back(2);
  list.push_back(5);
  list.pop_front();
  int front = list.front();
  list.print();
  return EXIT_SUCCESS;
}