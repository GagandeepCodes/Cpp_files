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
        ll k,x,a;cin>>k>>x>>a;
        ll curr = 0;
        bool flag = true;
        for(int i=0;i<x;i++){
            if(flag==false){
                break;
            }
            ll b = (curr+k-1)/(k-1);
            if(b==0){
                curr+=1;
            }else{
                curr+=b;
            }
            if(curr<=a){
                flag = true;
            }
            else{
                flag = false;
            }
        }
        ll left = k*(a-curr);
        if((left>a)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}