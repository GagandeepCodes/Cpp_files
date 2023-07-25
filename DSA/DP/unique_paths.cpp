//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;


class Solution {
public:
    int solve(int i,int j,vector<vector<int>> &dp){
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up = solve(i-1,j,dp);
        int left = solve(i,j-1,dp);
        return dp[i][j] = up + left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,0));
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int up=0;
                int left = 0;
                if(i==0 && j==0) dp[i][j]=1;
                else {
                    if(i>=1){
                        up = dp[i-1,j];
                    }
                    if(j>=1){
                        left = dp[i,j-1];
                    }
                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m-1][n-1];
        // return solve(m-1,n-1,dp);
    }
};
int main()
{
    
    return 0;
}