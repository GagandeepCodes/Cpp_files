#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
        // code here
        int len = 0;
        Node* temp  = head ;

        while(temp != NULL) {
            len++;
            temp  = temp -> next;
        }
        Node* fwd = NULL;
        Node* curr = head;
        Node* prev = NULL;
        int cnt=0;
        
        while(curr!=NULL && cnt<k){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            cnt++;
        }
        if(fwd!=NULL){
            head->next = reverse(fwd,len-k);
        }
        return prev;
    }
};
int main()
{
    
    return 0;
}