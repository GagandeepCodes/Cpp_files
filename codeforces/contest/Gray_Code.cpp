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
    vector<ll> v(1<<n);
    for(int i=0; i<(1<<n);++i){
        v[i] = i^(i>>1);   
    }
    for(int i=0;i<v.size();++i){
        string temp = "";
        int cnt = 0;
        while(v[i]>0){
            temp+=to_string(v[i]%2);
            v[i]=v[i]/2;
            cnt++;
        }
        if(cnt < n){
            int x = n - cnt;
            for(int i=0;i<x;++i){
                temp+="0";
            }
        }
        reverse(temp.begin(),temp.end());
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

i^(i>>1) 
0^0
1^0