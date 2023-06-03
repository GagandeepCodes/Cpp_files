#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    void inorder_of_tree(Node* root,vector<int>&v){
       if(!root) return;
       inorder_of_tree(root->left,v);
       v.push_back(root->data);
       inorder_of_tree(root->right,v);
   }
   void inorder_bst(Node* root,vector<int> v,int &i){
       if(!root) return ;
       inorder_bst(root->left,v,i);
       root->data = v[i++];
       inorder_bst(root->right,v,i);
   }
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>v;
       int i=0;
       inorder_of_tree(root,v);
       sort(v.begin(),v.end());
       inorder_bst(root,v,i);
       return root;
    }
};
int main()
{
    
    return 0;
}