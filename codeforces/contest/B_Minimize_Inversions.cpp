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
        ll n;cin>>n;
        vector<ll> a(n,0);
        vector<ll> b(n,0);
        unordered_map<ll,ll> m;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }

        for(ll i=0;i<n;i++){
            m[a[i]] = b[i];
        }
        sort(a.begin(),a.end());

        for(ll i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(ll i=0;i<n;i++){
            cout<<m[a[i]]<<" ";
        }
        cout<<endl;

    }
    // you should actually read the stuff below

        /*
            Programming is like sex,
            you love it untill there's an error.
        */
}
int main()
{
    solve();
    return 0;
}



// 6
// 2 5 6 1 3 4 -> 7
// 1 5 3 6 2 4 -> 6


