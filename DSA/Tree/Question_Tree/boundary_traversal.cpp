#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isLeaf(Node* root){
        if((root == NULL) || (root->left == NULL && root->right == NULL))
            return true;
        else{
            return false
        }
    }

    void addLeftBoundary(Node* root,vector<int> &res){
        Node* curr = root->left;
        while(curr){
            if(!isLeaf(curr)) res.push_back(curr->data);
            if(curr->left) curr = curr->left;
            else curr = curr->right;
        }
    }

    void addRightBoundary(Node* root,vector<int> &res){
        Node* curr = root->right;
        vector<int> temp;
        while(curr){
            if(!isLeaf(curr)) temp.push_back(curr->data);
            if(curr->right) curr = curr->right;
            else curr = curr->left;
        }
        for(int i=temp.size();i>=0;--i){
            res.push_back(temp[i]);
        }
    }

    void addLeaves(Node* root,vector<int> &res){
        if(isLeaf(root)){
            res.push_back(root->data);
            return ;
        }
        if(root->left) addLeaves(root->left,res);
        if(root->right) addLeaves(root->right,res);
    }

    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> res;
        if(!root) return res;
        if(!isLeaf(root)) res.push_back(root->data);
        addLeftBoundary(root,res);
        addLeaves(root,res);
        addRightBoundary(root,res);
        return res;
    }
};
int main()
{
    
    return 0;
}

//void traverseLeft(Node *root, vector<int> &ans)
    // {
    //     if((root == NULL) || (root->left == NULL && root->right == NULL))
    //         return;
        
    //     ans.push_back(root->data);
        
    //     if(root->left)
    //         traverseLeft(root->left, ans);
    //     else
    //         traverseLeft(root->right, ans);
        
    // }
    
    // void traverseLeaf(Node *root, vector<int> &ans)
    // {
    //     if(root == NULL)
    //         return;
            
    //     if(root->left == NULL && root->right == NULL){
    //         ans.push_back(root->data);
    //         return;
    //     }
            
    //     traverseLeaf(root->left, ans);
    //     traverseLeaf(root->right, ans);
    // }
    
    // void traverseRight(Node *root,  vector<int> &ans)
    // {
    //     if((root == NULL) || (root->left == NULL && root->right == NULL))
    //         return;
            
    //     if(root->right)
    //         traverseRight(root->right, ans);
    //     else
    //         traverseRight(root->left,ans);
        
    //     ans.push_back(root->data);
    // }

    // vector <int> boundary(Node *root)
    // {
    //     vector<int> ans;
        
    //     if(root->left == NULL && root->right == NULL){
    //         ans.push_back(root->data);
    //         return ans;
    //     }
        
    //     ans.push_back(root->data);
        
    //     traverseLeft(root->left, ans);
        
    //     traverseLeaf(root->left, ans);
    //     traverseLeaf(root->right, ans);
        
    //     traverseRight(root->right, ans);
        
    //     return ans;
    // }