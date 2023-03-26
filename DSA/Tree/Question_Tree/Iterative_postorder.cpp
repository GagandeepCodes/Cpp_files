#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> postOrder(Node* node) {
        // code here
        vector<int> ans;
        if(node == NULL) return ans;
        stack<Node*> st1,st2;
        st1.push(node);
        while(!st1.empty()){
            node = st1.top();
            st1.pop();
            st2.push(node);
            if(node->left){
                st1.push(node->left);
            }
            if(node->right){
                st1.push(node->right);
            }
            // ans.push_back(node->data);
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->data);
            st2.pop();
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}