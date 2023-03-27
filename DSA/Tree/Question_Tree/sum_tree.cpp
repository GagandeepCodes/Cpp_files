#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    pair<bool,int> find(Node* root){
        if(root==NULL){
            pair<bool,int> p =  make_pair(true,0);
            return p;
         }
         if(root->left==NULL && root->right==NULL){
            pair<bool,int> p = make_pair(true,root->data);
            return p;
         }

         pair<bool,int> left = find(root->left);
         pair<bool,int> right = find(root->right);

         bool leftcheck = left.first;
         bool rightcheck = right.first;

         bool sumcheck = (root->data == left.second+right.second);
         pair<bool,int> ans;
         if(leftcheck&&rightcheck&&sumcheck){
            ans.first = true;
            ans.second = 2*(root->data);
         }
         else{
            ans.first = false;
         }

         return ans;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         pair<bool,int> ans;
         ans = find(root);
         return ans.first;
    }
};
int main()
{
    
    return 0;
}