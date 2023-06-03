#include<bits/stdc++.h>
using namespace std;
vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int> ans;
       stack<Node*> s1;
       stack<Node* > s2;
       while(root1 || root2 || s1.size() || s2.size()){
           while(root1){
               s1.push(root1);
               root1=root1->left;
           }
           while(root2){
               s2.push(root2);
               root2 = root2->left;
           }
           if(s2.empty() ||(s1.size() && s1.top()->data<s2.top()->data)){
               root1 = s1.top();
               s1.pop();
               ans.push_back(root1->data);
               root1 = root1->right;
           }
           else{
               root2 = s2.top();
               s2.pop();
               ans.push_back(root2->data);
               root2 = root2->right;
           }
       }
       return ans;
    }
int main()
{
    
    return 0;
}