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
        ll n;cin>>n;
        vector<vector<char> > v(n,vector<char>(n,0));
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        vector<ll> c;
        for(ll i=0;i<n;i++){
            ll cnt = 0;
            for(ll j=0;j<n;j++){
                if(v[i][j]=='1'){
                    cnt++;
                }
            }
            if(cnt>0) c.push_back(cnt);
        }
        // for(ll i=0;i<c.size();i++){
        //     cout<<c[i]<<" ";
        // }cout<<endl;
        sort(c.begin(),c.end());
        bool sq = false;
        bool tr = false;
        for(ll i=0;i<c.size()-1;i++){
            if(c[i]==c[i+1]){
                sq=true;
            }
            else if(c[i]!=c[i+1]){
                tr = true;
                break;
            }
        }
        if(tr){
            cout<<"TRIANGLE"<<endl;
        }
        else if(sq){
            cout<<"SQUARE"<<endl;
        }
    }
        /*Programming is like sex,
            you love it until there's an error.*/
}
int main()
{
    solve();
    return 0;
}