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
    int findmaxsum(TreeNode* node,int &maxi){
        if(node==NULL){
            return 0;
        }
        // it should not be a negetive number
        int leftmaxsum = max(0,findmaxsum(node->left,maxi));
        int rightmaxsum = max(0,findmaxsum(node->right,maxi));
        maxi = max(maxi,leftmaxsum+rightmaxsum+node->val);
        
        return node->val + max(leftmaxsum,rightmaxsum);
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        int ans = findmaxsum(root,maxi);
        return maxi;
    }
};
int main()
{
    
    return 0;
}