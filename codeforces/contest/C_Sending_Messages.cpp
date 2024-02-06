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
    int t;cin>>t;
    while(t--){
        ll n,f,a,b;cin>>n>>f>>a>>b;
        vector<ll> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        ll total = n*a;
        vector<ll> diff;
        diff.push_back(v[0]);
        for(int i=1;i<n;i++){
            diff.push_back(v[i] - v[i-1]);
        }
        bool flag  = true;
        for(int i=0;i<n;i++){
            ll rc = min(diff[i]*a,b);
            if(f<0){
                flag = false;
                break;
            }
            if(f-rc > 0){
                f-=rc;
            }
            else{
                flag  = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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