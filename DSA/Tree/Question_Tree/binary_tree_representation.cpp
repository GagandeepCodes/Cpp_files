#include<bits/stdc++.h>
using namespace std;
class Solution{
public:

    void create_tree(node* root0, vector<int> &vec){
        //Your code goes here
        queue<node*> q;
        q.push(root0);
        for(int i=1;i<vec.size();i+=2){
            node* temp = q.front();
            q.pop();
            temp->left = newNode(vec[i]);
            q.push(temp->left);
            
            temp->right = newNode(vec[i+1]);
            q.push(temp->right);
            
        }
    }

};
int main()
{
    
    return 0;
}