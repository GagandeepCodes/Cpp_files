#include<bits/stdc++.h>
using namespace std;
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> res;
   recursion(root,0,res);
   return res;
}
void recursion(Node* root, int level, vector<int> &res){
    if(root==NULL){
        return ;
    }
    if(res.size()==level){
        res.push_back(root->data);
    }
    recursion(root->left,level+1,res);
    recursion(root->right,level+1,res);
}
int main()
{
    
    return 0;
}