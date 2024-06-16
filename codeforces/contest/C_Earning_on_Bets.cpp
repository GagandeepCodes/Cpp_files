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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> v(n,0);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans = 1;
        for (ll i = 0; i < n; i++)ans = (((v[i] * ans)) /(gcd(v[i], ans)));
        vector<ll> res;
        ll sum = 0;
        for(ll i=0;i<n;i++){
            res.push_back(ans/v[i]);
            sum+=(ans/v[i]);
        }
        if(sum>=ans){
            cout<<-1<<endl;
        }
        else{
            for(ll i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }cout<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}