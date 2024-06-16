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
        ll n,k;cin>>n>>k;
        ll num = 0;
        bool flag = true;
        ll i=1;
        while(flag){
            if(n%2==1){
                num = (n/2) + 1;
            }
            else{
                num = n/2;
            }
            if(k<=num){
                ll f= (2*k)-1;
                cout<<(f*i)<<endl;
                flag=false;
                break;
            }
            else if(k>num){
                k-=num;
                i*=2;n/=2;
            }
        }
    }
}
int main()
{
    solve();
    return 0;
}