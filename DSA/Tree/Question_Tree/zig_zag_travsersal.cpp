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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool LeftToRight = true;

        while(!q.empty()){
            int size = q.size();
            vector<int> row(size);

            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                if(LeftToRight){
                    row[i]=temp->val;
                }
                else{
                    row[size-1-i]=temp->val;
                }
                q.pop();
                if(temp->left) q.push(temp->left);

                if(temp->right) q.push(temp->right);
            }
            LeftToRight=!LeftToRight;
            result.push_back(row);
        }
            return result;
    }
};
int main()
{
    
    return 0;
}