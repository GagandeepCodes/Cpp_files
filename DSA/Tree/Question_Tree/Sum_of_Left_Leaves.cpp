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
    int ans  = 0;
    bool flag = false;
    void dfs(TreeNode* root){
        if(root==nullptr) return ;

        if(flag){
            if(!root->left && !root->right) ans+=root->val;
        }
        flag = true;
        dfs(root->left);
        flag = false;
        dfs(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
int main()
{
    
    return 0;
}