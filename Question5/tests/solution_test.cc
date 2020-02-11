#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(AcadamicRecordTester, notAbove) {
  AcadamicRecord solution = AcadamicRecord(95,80,70);
  AcadamicRecord obj = AcadamicRecord(100,90,80);
  solution++;
  bool n = obj.operatorEqu(obj,solution);
  EXPECT_EQ(n, true);
}

TEST(AcadamicRecordTester, notBelow) {
  AcadamicRecord solution = AcadamicRecord(5,20,30);
  AcadamicRecord obj = AcadamicRecord(0,0,10);
  solution--;
  bool n = obj.operatorEqu(obj,solution);
  EXPECT_EQ(n, true);
}

TEST(AcadamicRecordTester, alltester) {
  AcadamicRecord obj1 = AcadamicRecord(5,10,95);
  AcadamicRecord obj2 = AcadamicRecord();
  obj1++;
  obj1--;
  obj2 = obj1;
  obj2+=50;
  obj2-=30;
  AcadamicRecord obj3 = AcadamicRecord(20,20,70);
  bool n = obj2.operatorEqu(obj2,obj3);
  EXPECT_EQ(n, true);
}

TEST(AcadamicRecordTester, addEq) {
  AcadamicRecord solution = AcadamicRecord(5,20,30);
  solution+=20;
  AcadamicRecord obj = AcadamicRecord(25,40,50);
  bool n = obj.operatorEqu(obj,solution);
  EXPECT_EQ(n, true);
}

TEST(AcadamicRecordTester, subEq) {
  AcadamicRecord solution = AcadamicRecord(5,20,30);
  solution-=5;
  AcadamicRecord obj = AcadamicRecord(0,15,25);
  bool n = obj.operatorEqu(obj,solution);
  EXPECT_EQ(n, true);
}


TEST(AcadamicRecordTester, preadd) {
  AcadamicRecord solution = AcadamicRecord(5,20,30);
  ++solution;
  AcadamicRecord obj = AcadamicRecord(15,30,40);
  bool n = obj.operatorEqu(obj,solution);
  EXPECT_EQ(n, true);
}

TEST(AcadamicRecordTester, presub) {
  AcadamicRecord solution = AcadamicRecord(50,30,30);
  --solution;
  AcadamicRecord obj = AcadamicRecord(30,10,10);
  bool n = obj.operatorEqu(obj,solution);
  EXPECT_EQ(n, true);
}