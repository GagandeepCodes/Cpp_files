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
    ll n,m,k;cin>>n>>m>>k;
    vector<ll> v1(n,0);
    vector<ll> v2(m,0);
    for(ll i=0;i<n;i++){
        cin>>v1[i];
    }
    for(ll i=0;i<m;i++){
        cin>>v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    ll i=0,j=0,res=0;
    while(i<n && j<m){
        if(abs(v1[i] - v2[j])<=k){
            res++;
            i++;
            j++;
        }
        else{
            if(v1[i] > v2[j]){
                j++;
            }
            else{
                i++;
            }
        }
    }
    cout<<res<<endl;
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