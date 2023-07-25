/*================MEMOIZATION================*/
class Solution {
public:
    int f(int ind,vector<int> nums,vector<int> &dp){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int pick = nums[ind]  + f(ind-2,nums,dp);
        int notpick = 0 + f(ind-1,nums,dp);
        return dp[ind] = max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return f(n-1,nums,dp);
    }
};

/*==============TABULATION=================*/



// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> dp(n,-1);
//         dp[0] = nums[0];
//         int neg = 0;
//         for(int i=1;i<n;i++){
//             int take = nums[i] + 0;
//             if(i>1){
//                 take += dp[i-2];
//             }
//             int not_take = 0 + dp[i-1];
//             dp[i] = max(take,not_take);
//         }
//         return dp[n-1];
//     }
// };




// //code aisa likho ki,
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