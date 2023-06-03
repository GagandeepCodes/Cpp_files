#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int diff = INT_MAX;
TreeNode* prev = nullptr;
    void dfs(TreeNode* root){
        if(root->left) dfs(root->left);
        if(prev!=NULL) diff = min(diff,root->val - prev->val);
        prev = root;
        if(root->right) dfs(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        //go with inorder traversal 
        //Minimum diff will be in the two consecutive values in a sorted order/
        //therefore inroder will give you the sorted order of nodes
        dfs(root);
        return diff;
    }
};
int main()
{
    
    return 0;
}