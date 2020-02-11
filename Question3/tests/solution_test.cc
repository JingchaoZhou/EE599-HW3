#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SinglyLinkedListTester, emptytest) {
  SinglyLinkedList list;
  bool actual = list.empty();
  EXPECT_EQ(true, actual);
}

TEST(SinglyLinkedListTester, sizeAndPushback) {
  SinglyLinkedList list;
  list.push_back(2);
  list.push_back(5);
  int actual = list.size();
  EXPECT_EQ(2, actual);
}

TEST(SinglyLinkedListTester, pushFront) {
  SinglyLinkedList list;
  list.push_front(1);
  list.push_front(3);
  list.push_front(5);
  int actual =list.front();
  EXPECT_EQ(5, actual);
}

TEST(SinglyLinkedListTester, GetBackandEraseandback) {
  SinglyLinkedList list;
  list.push_front(1);
  list.push_front(3);
  list.push_back(2);
  ListNode *p = list.GetBackPointer();
  list.erase(p);
  int back = list.back();
  EXPECT_EQ(1, back);
}

TEST(SinglyLinkedListTester, popback) {
  SinglyLinkedList list;
  list.push_front(1);
  list.push_front(3);
  list.push_back(2);
  list.push_back(5);
  list.pop_back();
  int back = list.back();
  EXPECT_EQ(2, back);
}

TEST(SinglyLinkedListTester, popfrontAndFront) {
  SinglyLinkedList list;
  list.push_front(1);
  list.push_front(3);
  list.push_back(2);
  list.push_back(5);
  list.pop_front();
  int front = list.front();
  EXPECT_EQ(1, front);
}

TEST(SinglyLinkedListTester, GetIthPtrandInsert) {
  SinglyLinkedList list;
  list.push_front(1);
  list.push_front(3);
  list.push_back(2);
  list.push_back(5);
  ListNode *p = list.GetIthPointer(4);
  list.insert_after(p,7);
  int back = list.back();
  EXPECT_EQ(7, back);
}