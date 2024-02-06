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
        vector<ll> v(n,0);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        map<char,ll> m;
        string temp = "";
        char c = 'a';
        for(ll i=0;i<n;i++){
            bool flag = true;
            if(v[i]==0){
                temp.push_back(c);
                m[c]++;
                c = c + 1;
            }
            else{
                for(auto it:m){
                    if(it.second==v[i] && flag==true){
                        temp.push_back(it.first);
                        m[it.first]++;
                        flag = false;
                    }
                }
            }
            flag = true;
        }
        cout<<temp<<endl;
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