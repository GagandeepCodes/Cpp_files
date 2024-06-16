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
    ll n,m;cin>>n>>m;
    vector<ll> a(n,0);
    vector<ll> b(m,0);
    multiset<ll,greater<ll> > m1;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    for(ll i=0;i<n;i++){
        m1.insert(a[i]);
    }
    for(ll i=0;i<m;i++){
        multiset<ll,greater<ll> > :: iterator it = m1.lower_bound(b[i]);
        if(it==m1.end()){
            cout<<-1<<endl;
        }
        else{
            cout<<*it<<endl;
            m1.erase(it);
        }
    }
}
int main()
{
    solve();
    return 0;
}