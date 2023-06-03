#include<bits/stdc++.h>
using namespace std;
bool isValid(Node* root,int min,int max){
        if(root==NULL) return true;
        if(root->data>=max || root->data<=min) return false;
        return isValid(root->left,min,root->data) && isValid(root->right,root->data,max);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        return isValid(root,INT_MIN,INT_MAX);
    }
int main()
{
    
    return 0;
}