#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	Node* suc = NULL;
	Node* pre = NULL;
	void pree(Node* root,int K){
	    while(root){
	        if(root->data <= K){
	            pre = root;
	            root = root->right;
	        }
	        else{
	            root = root ->left;
	        }
	    }
	}
	void succ(Node* root,int K){
	    while(root){
	        if(root->data <= K){
	            root = root->right;
	        }
	        else{
	            suc = root;
	            root = root ->left;
	        }
	    }
	}
    int minDiff(Node *root, int K)
    {
        //Your code here
        pree(root,K);
        succ(root,K);
        int x = INT_MAX;
        int y = INT_MAX;
        
        if(suc!=NULL){
            // cout<<"Suc : "<<suc->data<<endl;
            x = abs(K-suc->data);
        }
        if(pre!=NULL){
            // cout<<"Pre : "<<pre->data<<endl;
            y = abs(K-pre->data);
        }
        return min(x,y);
    }
};
int main()
{
    
    return 0;
}