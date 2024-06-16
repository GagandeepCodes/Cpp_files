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
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int ans = 2;
        int maxi = 0;
        
        for (int i=2;i<=n; i++) {
            int k = n/i;
            int sum = i * (k*(k + 1) / 2);
            
            if (sum > maxi) {
                maxi = sum;
                ans = i;
            }
        }
        cout<<ans<<endl;
    }
}
int main()
{
    solve();
    return 0;
}