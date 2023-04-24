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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        queue<pair<TreeNode* ,pair<int,int>>> todo;
        todo.push({root,{0,0}});
        while(!todo.empty()){
            auto p = todo.front();
            todo.pop();
            TreeNode* node = p.first;
            int x = p.second.first,  y = p.second.second;
            nodes[x][y].insert(node->val);
            if(node->left){
                todo.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                todo.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> ans;
            for(auto i:nodes){
                vector<int> col;
                for(auto j:i.second){
                    col.insert(col.end(),j.second.begin(),j.second.end());
                }
                ans.push_back(col);
            }
        return ans;
        
    }
};
int main()
{
    
    return 0;
}

// vector<int>v;
//         if(root==NULL){
//             return v;
//         }
//         map<int,vector<int>> m;
//         queue<pair<Node*,int>> q;
        
//         q.push({root,0});
//         while(!q.empty()){
//             root=q.front().first;
//             int col=q.front().second;
//             q.pop();
            
//             m[col].push_back(root->data);
            
//             if(root->left){
//                 q.push({root->left,col-1});
//             }
//             if(root->right){
//                 q.push({root->right,col+1});
//             }
//         }
//         for(auto it:m){
//             v.insert(v.end(),it.second.begin(),it.second.end());
            
//         }
//         return v;