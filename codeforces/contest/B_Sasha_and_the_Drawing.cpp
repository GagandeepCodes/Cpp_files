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
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k==(4*(n)-2)){
            cout<<(k/2)+1<<endl;
        }
        else{
            if(k%2==0){
                cout<<k/2<<endl;
            }
            else{
                cout<<(k/2)+1<<endl;
            }
        }

    }

}
int main()
{
    solve();
    return 0;
}