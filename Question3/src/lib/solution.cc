#include "solution.h"
#include "iostream"

SinglyLinkedList::SinglyLinkedList(){
head_ =  new ListNode(0);
}

SinglyLinkedList::SinglyLinkedList(const vector<int> &inputs, int i){
  head_ = new ListNode(0);
  ListNode * temp = head_;
  ListNode * record;
  for(int j = 0; j<inputs.size();j++){
    ListNode * t = new ListNode(inputs[j]);
    temp -> next = t;
    temp = temp -> next; 
    if (j == i-1){
      record = t;
    }
  }

  if ( i > 0 && i<= inputs.size()){
    temp -> next  = record;
  }
  if (i == -1 || i > inputs.size() + 1){
    temp -> next = nullptr;
  }
}//ok

bool SinglyLinkedList::empty() { 
  if (head_ -> next == NULL)
    {return true;}
  else {
    return false;
  }
  }//ok

int SinglyLinkedList::size(){
  int count = 0;
  ListNode * temp= new ListNode(0);
  temp = head_;
  while(temp -> next != NULL){
    count++;
    temp = temp -> next;
  }
return count;
}//ok

void SinglyLinkedList::push_back(int i){
  ListNode * temp= new ListNode(i);
  ListNode * curr;
  curr = head_;
    while (curr -> next != NULL){
      curr = curr -> next;
    }
    curr -> next = temp;

}//ok

void SinglyLinkedList::push_front(int i){
  ListNode *temp= new ListNode(i);
  temp -> next = head_ -> next;
  head_ -> next = temp;
}//ok

void SinglyLinkedList::insert_after(ListNode* p,int i){
  ListNode *temp= new ListNode(i);
  temp -> next = p -> next;
  p -> next = temp;
}

void SinglyLinkedList::erase(ListNode* p){
ListNode * temp = head_;
  while (temp -> next != p){
    temp = temp -> next;
  }
  temp -> next = p -> next;
  p -> next = NULL;
}//ok

void SinglyLinkedList::pop_front(){
  head_ = head_ -> next;
}//ok

void SinglyLinkedList::pop_back(){
  ListNode * temp = head_;
  while(temp -> next -> next != NULL){
    temp = temp -> next;
  }
  temp -> next = NULL;
}//ok

int SinglyLinkedList::back(){
ListNode * temp = head_;
  while(temp -> next != NULL){
    temp = temp -> next;
  }
return temp -> val;
}//ok

int SinglyLinkedList::front(){
ListNode * temp = head_;
return temp -> next -> val;
}//ok

ListNode* SinglyLinkedList::GetBackPointer(){
ListNode * temp = head_;  
  while(temp -> next != NULL){
    temp = temp -> next;
  }

return temp;
}//ok

ListNode* SinglyLinkedList::GetIthPointer(int i){
  int count = 0;
  ListNode * temp= new ListNode(0);
  temp = head_;
  while((temp -> next != NULL) && (count != i)){
    count++;
    temp = temp -> next;
  }
  return temp;
}//ok

void SinglyLinkedList::print(){
  ListNode *temp = NULL;
  temp = head_ -> next;
  cout << "{";
  while(temp != NULL){
    cout << temp -> val << " ";
    temp = temp -> next;
  }
  cout << "}";
}//ok


SinglyLinkedList::~SinglyLinkedList(){
    ListNode *temp = head_;
    while(temp -> next != NULL){
      temp = temp -> next;
      delete temp;
    }
    delete head_;
}//ok