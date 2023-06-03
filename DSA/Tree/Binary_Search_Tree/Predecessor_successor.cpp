#include<bits/stdc++.h>
using namespace std;
void pree(Node* root,Node* &pre,int key){
    while(root!=NULL){
    if(root->key<key){
        pre = root;
        root = root->right;
    }
    else{
        root = root->left;
    }
}
}
void succ(Node* root,Node* &succ,int key){
    while(root!=NULL){
    if(root->key<=key){
        root = root->right;
    }
    else{
        succ = root;
        root = root->left;
    }
}
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
pree(root,pre,key);
succ(root,suc,key);
}
int main()
{
    
    return 0;
}