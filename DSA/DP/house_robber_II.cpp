class Solution {
public:
    int f(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        dp[0] = nums[0];
        int neg = 0;
        for(int i=1;i<n;i++){
            int take = nums[i] + 0;
            if(i>1){
                take += dp[i-2];
            }
            int not_take = 0 + dp[i-1];
            dp[i] = max(take,not_take);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        int  n = nums.size();
        vector<int> ans1 ,ans2;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0){
                ans2.push_back(nums[i]);
            }
            if(i!=n-1){
                ans1.push_back(nums[i]);
            }
        }
        
        return max(f(ans1),f(ans2));
    }
};
//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    
    return 0;
}