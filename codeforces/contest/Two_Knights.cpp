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
    int n;cin>>n;
    for(int k=1;k<=n;++k){
        ll x = k*k;
        ll y = (x*(x-1))/2;
        if(k>2){
            y -= 4*(k-1)*(k-2);
        }
        cout<<y<<endl;
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

// 1 1 1 1 1
// 1 0 1 1 1
// 1 1 1 1 1
// 1 1 1 1 1
// 1 1 1 1 1

// 2 -> 6 - 0
// 3 -> 36 - 8 = 28
// 4 -> 120 - 24 = 96    6 = 2*3
// 5 -> 300 - 48 = 252   12 = 3*4