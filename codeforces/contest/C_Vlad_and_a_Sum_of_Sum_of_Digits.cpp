//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const ll M=1e9+7; //998244353;
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
int S(int x) {
	int res = 0;
	while (x) {
		res += (x % 10);
		x /= 10;
	}
	return res;
}
void solve(){
   int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll num = 200007;
        int dp[num];
        dp[0]=0;
        for(int i=1;i<num;i++){
            dp[i] = dp[i-1] + S(i);
        }
        cout<<dp[n]<<endl;
    }
}
int main()
{
    solve();
    return 0;
}