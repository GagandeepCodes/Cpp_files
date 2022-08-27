#include<bits/stdc++.h>
using namespace std;
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
     Node* curr = head;
     Node* temp = NULL;
     Node* fwd = head->next;
     while(fwd != NULL || curr -> next != NULL){
     if(head == NULL){
         return head;
     }
     if(curr -> data == fwd -> data){
         temp = fwd -> next;
         fwd -> next = NULL;
         curr -> next = temp;
         fwd = temp;
     }
     else
     {
         fwd = fwd-> next;
         curr = curr -> next;
     }
 }
 
 return head;
}
int main()
{
    
    return 0;
}