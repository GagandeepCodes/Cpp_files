//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    ll t;cin>>t;
    map<ll,ll> m;
    for(int i=0;i<t-1;i++){
        ll a;cin>>a;
        m[a]++;
    }
    for(int i=1;i<=t;i++){
        if(m[i]==0){
            cout<<i<<endl;
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