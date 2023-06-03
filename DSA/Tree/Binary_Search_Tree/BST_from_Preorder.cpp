#include<bits/stdc++.h>
using namespace std;
TreeNode* build(vector<int> &preorder,int &i,long bound){
        if(i==preorder.size() || preorder[i]>bound) return nullptr;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = build(preorder,i,root->val);
        root->right = build(preorder,i,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return build(preorder,i,LONG_MAX);
    }
int main()
{
    
    return 0;
}