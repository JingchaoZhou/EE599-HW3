#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <map>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class AcadamicRecord {
public:
  AcadamicRecord();
  AcadamicRecord(int m, int c,int p);
  
  AcadamicRecord(const AcadamicRecord &old);
  AcadamicRecord operator++();
  AcadamicRecord operator++(int);
  AcadamicRecord operator--();
  AcadamicRecord operator--(int);
  AcadamicRecord operator+=(int a);
  AcadamicRecord operator-=(int b);  
  bool operatorEqu(AcadamicRecord &old1,AcadamicRecord &old2);
  string print();

  ~AcadamicRecord();

  int maths;
  int computers;
  int physics;
};

#endif