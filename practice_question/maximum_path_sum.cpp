class Solution {
public:
    int mx=INT_MIN;
    int check(TreeNode* root){
        if(root==nullptr) return 0;
        int l = max(0,check(root->left));
        int r = max(0,check(root->right));
        mx = max(mx,l+r+root->val);
        return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int s = check(root);
        return mx;
    }
};