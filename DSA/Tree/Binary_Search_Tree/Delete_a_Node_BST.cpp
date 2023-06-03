#include<bits/stdc++.h>
using namespace std;
Node* rightMostChild(Node* root){
        if(!root->right) return root;
        return rightMostChild(root->right);
    }
    
Node* helper(Node* root){
        if(root->left==NULL) return root->right;
        else if(root->right==NULL) return root->left;
        Node* rightMost = rightMostChild(root->left);
        Node* rightchild = root->right;
        rightMost->right = rightchild;
        return root->left;
    }
Node *deleteNode(Node *root, int key) {
    // your code goes here
    if(!root) return NULL;
        if(root->data==key) return helper(root);
        Node* store = root;
        while(root!=NULL){
            if(root->data > key){
                if(root->left!=NULL && root->left->data == key){
                    root->left = helper(root->left);
                    break;
                }
                else{
                    root = root->left;
                }
            } else{
                if(root->right!=NULL && root->right->data == key){
                    root->right = helper(root->right);
                    break;
                }
                else{
                    root = root->right;
                }
            }
        }
        return store;
}
int main()
{
    
    return 0;
}