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
    int n;cin>>n;
    string s;
    for(int i=0;i<(2*n)+1;i++){
        if(i%2==0){
            s.push_back('1');
        }else{
            s.push_back('0');
        }
    }
    cout<<s<<endl;
}
int main()
{
    solve();
    return 0;
}