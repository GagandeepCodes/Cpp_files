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
        ll i=1,j=n-2;
        while(v[i]==v[i-1] && i<n){
            i++;
        }
        while(v[j]==v[j+1] && j>=0){
            j--;
        }
        if(v[0]==v[n-1] && j!=-1){
            cout<<j-i+1<<endl;
        }
        else cout<<min(n-i,j+1)<<endl;

        // ll l = 0;ll r = n-1;
        // ll ans = n-1;
        // while(v[l]==v[r] && l<=r){
        //     l++;r--;
        // }
        // if(l>r) ans=0;
        // else ans = r-l+1;

        // ll left = 0;
        // l=0;r=1;
        // while(v[l]==v[r] && r<n){
        //     l++;r++;
        //     left = r;
        // }
        // ll right = 0;
        // l=n-2;r=n-1;
        // while(v[l]==v[r] && l>=0){
        //     l--;r--;
        //     right = r;
        // }
        // ll f = right - left + 1;
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