#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    pair<int,int> diameterfast(Node* root){
        //base case
        if(root==NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        pair<int,int> left = diameterfast(root->left);
        pair<int,int> right  = diameterfast(root->right);
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second+right.second+1;

        int diameter = max(op1,max(op2,op3));
        int height = max(left.second,right.second) + 1;
        pair<int,int> ans;
        ans.first = diameter;
        ans.second = height;
        return ans;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        return diameterfast(root).first;

    }
};
int main()
{
    
    return 0;
}