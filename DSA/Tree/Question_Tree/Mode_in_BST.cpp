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
    unordered_map<int,int>map;
   

    void solve(TreeNode* root){
        if(!root)
        return;

        map[root->val]++;

        if(root->left)
        solve(root->left);

        if(root->right)
        solve(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        solve(root);
        vector<int> ans;
        int maxValue = 0;

        for(auto x:map){
            if(x.second>maxValue){
                maxValue = x.second;
                ans.clear();
            }
            if(x.second==maxValue){
                ans.push_back(x.first);
            }
        }
        
        return ans;
    }
};
int main()
{
    
    return 0;
}