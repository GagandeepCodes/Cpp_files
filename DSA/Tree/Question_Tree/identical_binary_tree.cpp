#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL && q!=NULL){
            return false;
        }
        if(p!=NULL && q==NULL){
            return false;
        }

        bool left = isSameTree(p->left,q->left);
        bool right  = isSameTree(p->right,q->right);

        if(left && right && (p->data == q->data)){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    
    return 0;
}