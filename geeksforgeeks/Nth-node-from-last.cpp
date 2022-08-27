#include<bits/stdc++.h>
using namespace std;

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
Node* reverse(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* fwd = NULL;
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
    while(curr != NULL){
        fwd = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

// int getlength(Node *&head, int length)
// {
//     if(head->next == NULL) return length;
//     return getlength(head->next,length+1);

// }
//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node* newhead = reverse(head);
        Node* temp = newhead;
        // int length = getlength(head,1);
        
        for(int i=0; i<n-1;i++){
            if(temp -> next != NULL)
                temp = temp -> next;
            else
                return -1;
        }
        return temp -> data;
}



int main()
{
    
    return 0;
}