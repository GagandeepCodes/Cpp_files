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
void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll n, x, y;
        cin >>n>>x>>y;
        vector<ll> v(n,0);
        map<pair<ll, ll>, ll> check;
        for (ll i = 0; i < n; i++) cin>>v[i];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll p = v[i] % x;
            ll q = v[i] % y;
            pair<ll,ll> p1 = make_pair(x-p,q);
            ans += check[p1];
            if (p == 0)  p = x;
            pair<ll,ll> p2 = make_pair(p,q);
            check[p2]++;
        }
        cout<<ans<<endl;
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