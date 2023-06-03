#include<bits/stdc++.h>
using namespace std;
Node* insert(Node* root, int Key) {
    // Your code here
    if(!root) return new Node(Key);
    Node* cur = root;
    while(1){
        
        if(cur->data<=Key){
            if(cur->right){
                if(cur->data == Key){
                    return root;
                }
                cur = cur->right;
            } else{
                if(cur->data == Key){
                    return root;
                }
                cur->right = new Node(Key);
                break;
            }
        } else{
            if(cur->left){
                if(cur->data == Key){
                    return root;
                }
                cur = cur->left;
            }else{
                if(cur->data == Key){
                    return root;
                }
                cur->left = new Node(Key);
                break;
            }
        }
    }
    return root;
}
int main()
{
    
    return 0;
}