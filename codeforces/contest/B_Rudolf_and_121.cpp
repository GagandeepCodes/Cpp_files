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
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll i=0;
        bool flag=false;
        while(i<n-2){
            if(v[i]==0) i++;
            else if(v[i]<0){
                flag=true;
                break;
            }
            else{
                ll x=v[i];
                v[i]=0;
                v[i+1]-=2*x;
                v[i+2]-=x;
                i++;
            }
        }
        if(flag) cout<<"NO"<<endl;
        else if(v[n-1]!=0 || v[n-2]!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
int main()
{
    solve();
    return 0;
}