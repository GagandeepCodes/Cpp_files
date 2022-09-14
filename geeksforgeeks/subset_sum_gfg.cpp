#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int sum = 0;
    void solve(int n , int sum ,vector<int> &arr, vector<int> &ans){
        if(n==0){
            ans.push_back(sum);
            return;
        }
        
        solve(n-1,sum+arr[n-1],arr,ans);
        solve(n-1,sum,arr,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        
        solve(arr.size(), 0 , arr,ans);
        
        return ans;
        
    }
};
int main()
{
    
    return 0;
}