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
        vector<ll> dif(n);
        dif[n-1] = n;
        for(ll i=n-2;i>=0;i--){
            if(v[i]==v[i+1]){
                dif[i] = dif[i+1];
            }
            else{
                dif[i] = i+1;
            }
        }
        ll q;cin>>q;
        for(ll i=0;i<q;i++){
            ll l,r;cin>>l>>r;
            l--;r--;
            if(dif[l]>r){   //30 20 20 10 10 20   ->1 3 3 5 5 6
                cout<<-1<<" "<<-1<<endl;
            }
            else{
                cout<<(l+1)<<" "<<(dif[l]+1)<<endl;
            }
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