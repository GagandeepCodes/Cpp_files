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
        vector<int> x,y;
        int a,b,c,d,e,f,g,h;cin>>a>>b>>c>>d>>e>>f>>g>>h;
        ll dx = 0;
        ll dy = 0;
        if(a==c){
            dy = abs(b-d);
        }
        if(a==e){
            dy = abs(b-f);
        }
        if(a==g){
            dy = abs(b-h);
        }
        if(e==c){
            dy = abs(f-d);
        }
        if(e==g){
            dy = abs(f-h);
        }
        if(g==c){
            dy = abs(h-d);
        }
        ll ans = dy*dy;
        cout<<ans<<endl;
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