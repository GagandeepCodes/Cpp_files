
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
void solve(){
    ll t;cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        string s; cin>>s;
        vector<ll> v(7,0);
        for(ll i=0;i<n;i++){
            if(s[i]=='A') v[0]++;
            if(s[i]=='B') v[1]++;
            if(s[i]=='C') v[2]++;
            if(s[i]=='D') v[3]++;
            if(s[i]=='E') v[4]++;
            if(s[i]=='F') v[5]++;
            if(s[i]=='G') v[6]++;
        }
        ll ans = 0;
        for(ll i=0;i<v.size();i++){
            if(v[i]==0){
                ans += m;
            }
            else if(v[i]%m!=0){
                if(v[i]<m){
                    ans += m-v[i];
                }
            }
        }
        cout<<ans<<endl;
    }
}
int main()
{
    solve();
    return 0;
}