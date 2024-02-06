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

3 2 1 3
8 4 2 8

3->2
2->1
1->1