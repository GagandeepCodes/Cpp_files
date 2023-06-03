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
    void dfs(TreeNode* root,vector<vector<int> > &allPaths,vector<int> &path,int sum){
        if(root==NULL) return ;
        path.push_back(root->val);
        if(!root->left &&!root->right && root->val == sum){
            allPaths.push_back(path);
        }

        dfs(root->left,allPaths,path,sum-root->val);
        dfs(root->right,allPaths,path,sum-root->val);
        //backtrack when the complete path has been checked.
        path.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int> > allPaths;
        vector<int> path;
        dfs(root,allPaths,path,targetSum);
        return allPaths;
    }
};
int main()
{
    
    return 0;
}