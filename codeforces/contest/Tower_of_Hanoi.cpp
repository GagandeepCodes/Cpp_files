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
void  toh(ll n,ll a,ll b,ll c){
    if(n==0) return ;
    toh(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    toh(n-1,b,a,c);
    // cout<<a<<" "<<c<<endl;
}
void solve(){
    int t;cin>>t;
    cout<<((1<<t ) - 1)<<endl;
    toh(t,1,2,3);
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