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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootIndex = 0;
        return build(preorder,inorder,rootIndex,0,inorder.size()-1);
    }
    TreeNode* build(vector<int> &preorder,vector<int> &inorder,int &rootIndex,int left,int right){
        if(left>right){
            return NULL;
        }
        int pivot = left;
        //find the element of preorder in the inorder
        while(inorder[pivot]!=preorder[rootIndex]){
            pivot++;
        }
        TreeNode* newNode = new TreeNode(inorder[pivot]);
        rootIndex++;
        newNode->left = build(preorder,inorder,rootIndex,left,pivot-1);
        newNode->right = build(preorder,inorder,rootIndex,pivot+1,right);
        return newNode;
    }
};
int main()
{
    
    return 0;
}