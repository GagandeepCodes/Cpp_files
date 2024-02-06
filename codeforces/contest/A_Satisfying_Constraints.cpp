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
        int n;cin>>n;
        ll cnt = 0;
        ll maxi = -1;
        ll mini = INT_MAX;
        vector<ll> v;
       for(int i=0;i<n;i++){
        ll a,x;cin>>a>>x;
        if(a==1){
            if(x>=maxi){
                maxi = x;
            }
        }
        else if(a==2){
            if(mini >= x){
                mini = x;
            }
        }
        else if(a==3){
            v.push_back(x);
        }
       }
       if(mini  < maxi) cnt = 0;
       else{
        for(int i=0;i<v.size();i++){
            if(v[i] >= maxi && v[i]<=mini){
                cnt--;
            }
        }
        cnt+=(mini - maxi + 1);
       }
       cout<<cnt<<endl;
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