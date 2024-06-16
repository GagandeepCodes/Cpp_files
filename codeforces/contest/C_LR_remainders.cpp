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
        vector<ll> v(n,0);
        vector<ll> q;
        for(ll i=0;i<n;i++) cin>>v[i];
        string s;cin>>s;
        ll l = -1;ll r = n;
        for(ll i=0;i<n;i++){
            if(s[i]=='L') l++;
            if(s[i]=='R') r--;
        }
        ll num = 1;
        for(ll i=n-1;i>=0;i--){
            if(s[i]=='L' && l>=0){
                num*=v[l];
                q.push_back(num%m);
                num%=m;
                l--;
            }
            if(s[i]=='R' && r<=n){
                num*=v[r];
                q.push_back(num%m);
                num%=m;
                r++;
            }
        }
        reverse(q.begin(),q.end());
        for(ll i=0;i<q.size();i++){
            cout<<q[i]<<" ";
        }cout<<endl;
    }
}
int main()
{
    solve();
    return 0;
}