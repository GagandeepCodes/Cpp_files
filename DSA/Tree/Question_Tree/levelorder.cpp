#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     void level(TreeNode* root, vector<vector<int>> &ans){
         if(root==NULL){
             return ;
         }
        vector<int> output;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp==NULL){
                ans.push_back(output);
                output.clear();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                output.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        level(root,ans);
        return ans;
    }
};
int main()
{
    
    return 0;
}