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
    while(t--){
        ll n,m;cin>>n>>m;
        vector<vector<char> > v(n,vector<char>(m,'@'));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        ll a=n,b=m,c=-1,d=-1;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(v[i][j] == '#'){
                    a = min(a,i);
                    c = max(c,i);
                    b = min(b,j);
                    d = max(d,j);
                }
            }
        }
        a++; b++; c++; d++;
        ll h = ((a+c)/2);
        ll k = ((b+d)/2);
        cout<<h<<" "<<k<<endl;
    }
}
int main()
{
    solve();
    return 0;
}