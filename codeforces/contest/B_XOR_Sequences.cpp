//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const ll M=1e9+7; //998244353;
#define ll_SIZE sizeof(ll) * 8
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
        ll x,y;cin>>x>>y;
        ll ans = 1;
        while(x>0 || y>0){
            if(x%2 == y%2){
                ans = ans << 1;
            }else{
                break;
            }
            x=x>>1;
            y=y>>1;
        }
        cout<<ans<<endl;
    }

}
int main()
{
    solve();
    return 0;
}