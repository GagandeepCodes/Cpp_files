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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int rootIndex = inorder.size()-1;
        return build(inorder,postorder,rootIndex,0,inorder.size()-1);
    }
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,int& rootIndex,int left,int right){
        if(left>right){
            return NULL;
        }
        int pivot = right;
        while(inorder[pivot]!=postorder[rootIndex]) pivot--;

        TreeNode* newNode = new TreeNode(inorder[pivot]);
        rootIndex--;

        newNode->right = build(inorder,postorder,rootIndex,pivot+1,right);
        newNode->left = build(inorder,postorder,rootIndex,left,pivot-1);
        return newNode;
    }
};
int main()
{
    
    return 0;
}