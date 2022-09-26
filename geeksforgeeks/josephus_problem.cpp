#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void solve(vector<int>v,int k,int index,int &ans){
       if(v.size()==1){
           ans=v[0];
           return ;
       }
       index=(index+k-1)%v.size();
       
       v.erase(v.begin()+index);
       solve(v,k,index,ans);
   }
    int josephus(int n, int k)
    {
       //Your code here
       
       vector<int>v;
      for(int i=0;i<n;i++){
          v.push_back(i+1);
      }
      int index = 0;
      int ans = -1;
      solve(v,k,index,ans);
      return ans;
    }
};
int main()
{
    
    return 0;
}