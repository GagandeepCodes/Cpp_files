#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void solve(vector<int> A , int index, vector<int> output, vector<vector<int> > &ans){
        
        if(index >= A.size()){
            ans.push_back(output);
            return ;
        }
        
        //exclude
        solve(A,index+1,output,ans);
        
        //include
        int element = A[index];
        output.push_back(element);
        solve(A,index+1,output,ans);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //Your code here
        int index = 0;
        vector<int> output;
        vector<vector<int> > ans;
        
        solve(A,index,output,ans);
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
int main()
{
    
    return 0;
}