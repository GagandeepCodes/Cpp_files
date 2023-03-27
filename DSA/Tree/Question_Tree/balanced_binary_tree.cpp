#include<bits/stdc++.h>
using namespace std;
// class Solution{
//     public:
//     int ans = 1;
//     int find(Node* root){
        
//         if(root==NULL){
//             return 0;
//         }
        
//         int left = find(root->left);
//         int right = find(root->right);
//         if(abs(left-right)>1) ans = 0;
//         int height = max(left,right) + 1;
//         return height;
//     }
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
//     {
//         //  Your Code here
//         int final = find(root);
//         return ans;
//     }
// };

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool, int> isBalancedFast(Node* root) {
                // base case
        if(root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<bool,int> left = isBalancedFast(root->left);
        pair<bool,int> right = isBalancedFast(root->right);
        
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs (left.second - right.second ) <=1;
        
        pair<bool,int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff) {
           ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
    
};
int main()
{
    
    return 0;
}