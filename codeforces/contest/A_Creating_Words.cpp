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
    ll n;cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        char c = a[0];
        char d = b[0];
        a[0] = d;
        b[0] = c;
        cout<<a<<" "<<b<<endl;
    }
}
int main()
{
    solve();
    return 0;
}