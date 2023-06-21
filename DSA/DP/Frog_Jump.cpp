#include<bits/stdc++.h>
using namespace std;
int f(vector<int> & height,int n,vector<int> &dp){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        int left = f(height,n-1,dp) + abs(height[n] - height[n-1]);
        int right = INT_MAX;
        if(n>1) right = f(height,n-2,dp) + abs(height[n] - height[n-2]);
        return dp[n] = min(left,right);
    }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        // vector<int> dp(n+1,-1);
        // return f(height,n-1,dp);

        //Tabulation
        vector<int> dp(n,0);
        dp[0] = 0;
        for(int i=1;i<n;i++){
            int fs = dp[i-1] + abs(height[i]- height[i-1]);
            int ss = INT_MAX;
            if(i>1) ss = dp[i-2]  + abs(height[i]-height[i-2]);
        }
        return dp[n-1];

        //Any time there is something like index-1,index-2 there will
        //always be space optimization
        
        //SPACE OPTIMIZATION
        int prev=0;
        int prev2=0;
        for(int i=1;i<n;i++){
            
            int jumpTwo = INT_MAX;
            int jumpOne= prev + abs(height[i]-height[i-1]);
            if(i>1)
                jumpTwo = prev2 + abs(height[i]-height[i-2]);
            
            int cur_i=min(jumpOne, jumpTwo);
            prev2=prev;
            prev=cur_i;
        }
        //return prev;
    }
int main()
{
    //10 20 30 10
    //why greedy will not work here? Look at the  example below...
    // 30 10 60 10 60 50
    //Try all possible ways and find the minimum
    return 0;
}