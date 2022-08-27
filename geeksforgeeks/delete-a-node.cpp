#include<bits/stdc++.h>
using namespace std;
/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* curr = head;
    // Node* fwd = head -> next;
    Node* prev = NULL;
    if(head -> next == NULL || head == NULL){
        return head;
    }
    
    if(x == 1){
        head = head->next;
        curr ->next = NULL;
        return head;
    }
    int c =1;
    while(c<x){
        prev = curr;
        curr = curr -> next;
        c++;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    
    delete curr;
    
    return head;
}

int main()
{
    
    return 0;
}