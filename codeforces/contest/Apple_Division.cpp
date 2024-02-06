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

long long int  f(vector<ll>& v,long long int curr,long long int rem,ll i){
    if(i==0) return abs(rem - curr);
    return min(f(v,curr+v[i],rem - v[i],i-1) , f(v,curr,rem,i-1));
}
void solve(){
    int n;cin>>n;
    vector<ll> v(n,0);
    long long int total = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
    }
    cout<<f(v,0,total,n-1)<<endl;
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

// 1 2 3 4 7
// 1 2 30 60 100