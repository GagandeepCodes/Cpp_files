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
bool check(ll a,ll b,ll c){
    if((a + b > c || a + c > b || b + c > a)){
        return true;
    }
    else{
        return false;
    }
}
ll perm(ll a){
    if(a>=3){
        return a*(a-1)*(a-2)/6;
    }
    if(a>=2){
        return a*(a-1)/2;
    }
    return 0;
}
void solve(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> v(n,0);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        bool n0 = false;
        if(n<3){
            n0 = true;
            cout<<0<<endl;
        }
        map<ll,ll> m;
        for(ll i=0;i<n;i++){
            m[v[i]]++;
        }
        ll ans = 0;
        ll cnt = 0;
        map<ll,ll> :: iterator it = m.begin();
        while(it!=m.end()){
            ll x  = it->second;
            if(it->second>=3){
                ans += x*(x-1)*(x-2)/6;
            }
            if(it->second>=2){
                ans += cnt*(x)*(x-1)/2;
            }
            cnt += x;
            it++;
        }
        if(!n0){
            cout<<ans<<endl;
        }
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

// 3 2 1 3
// 8 4 2 8

// 3->2
// 2->1
// 1->1