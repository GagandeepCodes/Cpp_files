#include<bits/stdc++.h>
using namespace std;
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;

    // Your code here
    int Ceil = -1;
    while(root!=nullptr){
        if(root->data==input){
            Ceil = root->data;
            return Ceil;
        }
        if(root->data<input){
            root = root->right;
        }
        else{
            Ceil = root->data;
            root= root->left;
        }
    }
    return Ceil;
}
int main()
{
    
    return 0;
}