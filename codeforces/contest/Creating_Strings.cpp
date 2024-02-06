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
    string s;cin>>s;
    sort(s.begin(),s.end());
    vector<string> v;
    v.push_back(s);
    // cout<<s.size()<<endl;
    while(next_permutation(s.begin(),s.end())){
        v.push_back(s);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
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