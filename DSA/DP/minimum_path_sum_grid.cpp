//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;


class Solution {
public:
    // int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>> &dp){
    //     if(i==0 && j==0) return grid[i][j];
    //     if(i<0 || j<0) return 1e9;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     int up = grid[i][j] + f(i-1,j,grid,dp);
    //     int left = grid[i][j] + f(i,j-1,grid,dp);
    //     return dp[i][j] = min(up,left);
    // }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // vector<vector<int>> dp(m,vector<int> (n,-1));
        vector<int> dp(n,0);
        // dp[0][0] = grid[0][0];
        for(int i=0;i<m;i++){
            vector<int> cur(n,0);
            for(int j=0;j<n;j++){
                if(i==0 &&j==0){
                    cur[j]=grid[i][j];
                }
                else{
                    int up = grid[i][j];
                    if(i>0){
                        up +=dp[j];
                    }
                    else{
                        up+=1e9;
                    }
                    int left = grid[i][j];
                    if(j>0){
                        left += cur[j-1];
                    }
                    else{
                        left+=1e9;
                    }
                    cur[j] = min(up,left);
                }
            }
            dp = cur;
        }
        return dp[n-1];
        // return f(m-1,n-1,grid,dp);
    }
};
int main()
{
    
    return 0;
}