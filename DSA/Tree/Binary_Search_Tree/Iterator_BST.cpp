#include<bits/stdc++.h>
using namespace std;
class BSTIterator {
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        TreeNode* curr = root;
        while(curr!=nullptr){
            st.push(curr);
            curr=curr->left;
        }
    }
    
    int next() {
        TreeNode* currNode = st.top();
        TreeNode* temp = currNode->right;
        st.pop();
        while(temp!=NULL){
            st.push(temp);
            temp=temp->left;
        }
        return currNode->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};

int main()
{
    
    return 0;
}