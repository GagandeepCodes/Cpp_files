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
    ll t;cin>>t;
    while(t--){
        ll n,m,k;cin>>n>>m>>k;
        vector<ll> a(n,0);vector<ll> b(m,0);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());ll ans = 0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(a[i]+b[j]<=k){
                    ans++;
                }else{
                    break;
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