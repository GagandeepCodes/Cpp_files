#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    Node *primeList(Node *head){
        vector<bool> isprime(10011,1);
        isprime[0]=isprime[1]=0;
        for(int i=2;i*i<=10010;i++){
            if(isprime[i]){
                for(int j=2*i;j<=10010;j+=i){
                    isprime[j]=0;
                }
            }
        }
        Node* curr = head;
        while(curr){
            int curr_data = curr->val;
            // int curr_data_left = 0;
            // int curr_data_right = 0;
            if(curr_data==1){
                curr->val=2;
            }
            else if(isprime[curr_data]){
                
            }
            else
            {
                int curr_data_left = curr_data;
                
                while(!isprime[curr_data_left])
                {
                    curr_data_left--;
                }
                int curr_data_right=curr_data;
                
            while(!isprime[curr_data_right])
                {
                    curr_data_right++;
                }
                int left_diff = abs(curr_data - curr_data_left);
                int right_diff = abs(curr_data - curr_data_right);
                
                if(left_diff<=right_diff){
                    curr->val = curr_data_left;
                    
                }
                else
                {
                    curr->val = curr_data_right;
                    
                }
            }
                curr=curr->next;
        }
        return head;
    }
};
int main()
{
    
    return 0;
}