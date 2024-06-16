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
ll len(ll n){
    return 1LL*(log10(n)+1);
}
bool f(ll a,ll b){
    ll x=0;ll y=1;ll z=0;ll w=1;
    while(a%(y*=10)==0){
        x++;
    }
    while(b%(w*=10)==0){
        z++;
    }
    return z>x;
}
void solve(){
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vector<ll> v(n,0);
        ll ans = 0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),f);
        bool flag = true;
        for(ll i=n-1;i>=0;i--){
            ans+=len(v[i]);
            if((i%2)==(n-1)%2){
                ll x=0;ll y=1;
                while(v[i]%(y*=10)==0){
                    x++;
                }
                ans-=x;
            }
        }
        if(ans<=m){
            cout<<"Anna"<<endl;
        }else{
            cout<<"Sasha"<<endl;
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