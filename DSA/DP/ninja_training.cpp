//This is an example of 2D DP.


//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;

int f(int day,int last,vector<vector<int>> &points,vector<vector<int>> &dp){
    if(day==0){
        int maxi = 0;
        for(int i=0;i<3;i++){
            if(i!=last){
                maxi=max(maxi,points[day][i]);
            }
        }
        return maxi;
    }
    if(dp[day][last]!=-1) return dp[day][last];
    int maxi = 0;
    for(int i=0;i<3;i++){
        if(i!=last){
            int point = points[day][i] + f(day-1,i,points,dp);
            maxi=max(maxi,point);
        }
    }
    return dp[day][last] = maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    // vector<vector<int>> dp(n,vector<int> (4,-1));
    // return f(n-1,3,points,dp);

    /*==================TABULATION====================*/
    vector<vector<int>> dp(n,vector<int> (4,0));
    dp[0][0] = max(points[0][1],points[0][2]);
    dp[0][1] = max(points[0][0],points[0][2]);
    dp[0][2] = max(points[0][1],points[0][0]);
    dp[0][3] = max(points[0][1],max(points[0][2],points[0][0]));

    for(int day=1;day<n;day++){
        for(int last = 0;last<4;last++){
            dp[day][last] = 0;

            for(int i=0;i<3;i++){
                if(i!=last){
                    int point = points[day][i] + dp[day-1][i];
                    dp[day][last] = max(dp[day][last],point);
                }
            }
        }
    }
    return dp[n-1][3];
}

int main()
{
    
    return 0;
}