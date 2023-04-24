#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        map<int,int> m;
        queue<pair<Node* ,int>> q;
        q.push({root,0});

        while(!q.empty()){
            auto p = q.front();
            q.pop();
            Node* node = p.first;
            int line = p.second;
            if(m.find(line)==m.end()){
                m[line] = node->data;
            }

            if(node->left){
                q.push({node->left,line-1});
            }
            if(node->right){
                q.push({node->right,line+1});
            }
        }
        vector<int> ans;
        for(auto it:m){
            ans.push_back(it.second);
        }

        return ans;
    }

};
int main()
{
    
    return 0;
}