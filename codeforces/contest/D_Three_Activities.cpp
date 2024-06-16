//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
ll fastpow2(ll x){
    ll res = 1;
    //define the value whose power is to be calculated
    ll a = 2;
    while(x > 0){
        if(x&1){
            res = (res * a) % M;
        }
        a = (a * a) % M;
        x >>= 1;
    }
    return res;
}
int f(vector<vector<vector<int> > > &dp, vector<vector<int> > &mat,int i,int j,int prev){
    if(i>=3 || j>=mat[0].size()) return 0;
    if(dp[i][j][prev] != -1) return dp[i][j][prev];
    int not_take = f(dp,mat,i,j+1,prev);
    int take = 0;
    if(prev!=j){
        take = mat[i][j] + f(dp,mat,i+1,j,j);
    }
    return dp[i][j][prev] = max(take,not_take);
}
void solve(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n,0); vector<int> b(n,0); vector<int> c(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++) cin>>c[i];
        vector<vector<int> > mat;
        mat.push_back(a);
        mat.push_back(b);
        mat.push_back(c);
        vector<vector<vector<int> > > dp(3,vector<vector<int> >(n,vector<int>(n,-1)));
        int ans = f(dp,mat,0,0,-1);
        cout<<ans<<endl;
    }
}
int main()
{
    solve();
    return 0;
}