#include<bits/stdc++.h>
using namespace std;
Node *copyList(Node *head)
    {
        //Write your code here
        Node* curr = head;
        while(curr!=NULL){
            Node* temp = curr->next;
            curr->next = new Node(curr->data);
            curr->next->next = temp;
            curr = temp;
        }
        curr = head;
        
        while(curr!=NULL){
            Node* temp = curr->next->next;
                if(curr->arb!=NULL){
                    curr->next->arb = curr->arb->next;
                }
                curr = temp;
        }
        
        curr = head;
        Node* copy = new Node(-100);
        Node* ans = copy;
        
        while(curr!=NULL){
            Node* temp = curr->next->next;
            copy->next = curr->next;
            curr->next = temp;
            curr = curr->next;
            copy = copy->next;
        }
        
        return ans->next;
    }
int main()
{
    
    return 0;
}