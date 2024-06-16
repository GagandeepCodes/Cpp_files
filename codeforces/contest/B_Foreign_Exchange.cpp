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
void solve(){
    ll n;cin>>n;
    vector<ll> v(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> a(n-1,0);
    vector<ll> b(n-1,0);
    for(ll i=0;i<n-1;i++){
        cin>>a[i]>>b[i];
        v[i+1]+=(v[i]/a[i])*b[i];
    }
    cout<<v[n-1]<<endl;
}
int main()
{
    solve();
    return 0;
}