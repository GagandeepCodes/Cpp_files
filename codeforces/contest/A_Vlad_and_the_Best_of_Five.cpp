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
        string s;cin>>s;
        unordered_map<char,ll> m;
        for(ll i=0;i<s.size();i++){
            m[s[i]]++;
        }
        unordered_map<char,ll> :: iterator it = m.begin();
        ll maxi = -1;
        char c;
        while(it!=m.end()){
            if(it->second>maxi){
                c = it->first;
                maxi = it->second;
            }
            it++;
        }
        cout<<c<<endl;
    }
        /*Programming is like sex,
            you love it untill there's an error.*/
}
int main()
{
    solve();
    return 0;
}