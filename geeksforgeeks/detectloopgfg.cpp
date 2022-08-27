#include<bits/stdc++.h>
using namespace std;
/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        map<Node*,bool> m;
        Node* temp = head;
        
        while( temp != NULL){
            if(m[temp] == true){
                return 1;
            }
             m[temp] = true;
             temp = temp -> next;
        }
        
        return 0;
    }
    
};

int main()
{
    
    return 0;
}