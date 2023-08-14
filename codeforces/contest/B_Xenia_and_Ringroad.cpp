//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const ll M=1e9+7; //998244353;
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v(m,0);
    for(ll i=0;i<m;i++){
        cin>>v[i];
    }
    ll prev = 1;
    ll res = 0;
    for(ll i=0;i<m;i++){
        if(v[i]>=prev){
            res+=v[i] - prev;
        }
        else{
            res+= n - prev + v[i];
        }
        prev = v[i];
    }
    cout<<res<<endl;
}
int main()
{
    solve();
    return 0;
}