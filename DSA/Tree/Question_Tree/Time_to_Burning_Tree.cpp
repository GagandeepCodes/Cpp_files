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
    int findMaxDistance(unordered_map<TreeNode* ,TreeNode*> &parent_track,TreeNode* target){
        queue<TreeNode* > q;
        q.push(target);
        //visited to keep the track that this Node is visited
        unordered_map<TreeNode*,int> visited;
        visited[target] = 1;
        int maxi = 0;
        while(!q.empty()){
            int size = q.size();
            int flag = 0;

            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                //if the node-left is not visited just mark it as visited
                if(node->left && !visited[node->left]){
                    flag = 1;
                    visited[node->left] = 1;
                    q.push(node->left);
                }
                //if the node-right is not visited just mark it as visited
                if(node->right && !visited[node->right]){
                    flag = 1;
                    visited[node->right] = 1;
                    q.push(node->right);
                }
                //if the parent is not visited just mark it as visited
                if(parent_track[node] && !visited[parent_track[node]]){
                    flag = 1;
                    visited[parent_track[node]] = 1;
                    q.push(parent_track[node]);
                }
            }

            //if the flag condition is ON , which means the you have burn all 
            //the nodes of that level.
            if(flag) maxi++;
        }

        return maxi ;
    }
    TreeNode* bfsToMapParents(TreeNode* root,unordered_map<TreeNode* ,TreeNode*> &parent_track,int start){
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* res;
        while(!q.empty())
        {
            TreeNode*curr = q.front();
            q.pop();
            //If the start node is found just store it into the result Node
            if(curr->val == start)
                res = curr;
            //Map the left of the curr to its parent curr
            if(curr->left != NULL)
            {
                parent_track[curr->left] = curr;
                q.push(curr->left);
            }
            //Map the right of the curr to its parent curr
            if(curr->right != NULL)
            {
                parent_track[curr->right] = curr;
                q.push(curr->right);
            }
        }
        return res;
    }
    int amountOfTime(TreeNode* root, int start) {
        //To Trac the parent node of the nodes
        unordered_map<TreeNode* ,TreeNode*> parent_track;
        //function that maps node to their parents and return the target node 
        //since we were given the value not the node
        TreeNode* target = bfsToMapParents(root,parent_track,start);
        //Function to calculate the distance
        int maxi = findMaxDistance(parent_track,target);
        return maxi;
    }
};
int main()
{
    
    return 0;
}