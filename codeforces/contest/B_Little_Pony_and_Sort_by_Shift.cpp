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
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt = 0;
    int pos = n;
    for(int i=0;i<n-1;i++){
        if(v[i] > v[i+1]){
            cnt++;
            pos = i;
        }
    }
    if(v[n-1] > v[0]) {
        cnt++;
        pos = n-1;
    }
    if(cnt==0) cout<<0<<endl;
    else if(cnt > 1){
        cout<<-1<<endl;
    }
    else{
        cout<<(n-1-pos)<<endl;
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