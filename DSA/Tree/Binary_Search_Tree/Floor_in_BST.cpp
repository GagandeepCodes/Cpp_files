#include<bits/stdc++.h>
using namespace std;
int floor(Node* root, int x) {
    // Code here
    int Floor = -1;
    if(root==NULL) return -1;
    while(root!=nullptr){
        if(root->data==x){
            Floor = root->data;
            return Floor;
        }
        if(root->data<x){
            Floor = root->data;
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    return Floor;
}
int main()
{
    
    return 0;
}