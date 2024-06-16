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
    ll t;
    cin>>t;
    while(t--){
        ll n,f,k;
        cin>>n>>f>>k;

        vector<ll> v(n);
        unordered_map<ll,ll> m;

        for(ll i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
        }

        ll fav=v[f-1];
        ll count=m[fav];

        sort(v.begin(),v.end(),greater<ll>());
        ll i=0;

        while(i<k) m[v[i++]]--;
        
        if(m[fav]==0) cout<<"YES"<<endl;
        else if(m[fav]==count) cout<<"NO"<<endl;
        else cout<<"MAYBE"<<endl;
    }
}
int main()
{
    solve();
    return 0;
}