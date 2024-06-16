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
    ll tc;cin>>tc;
    while(tc--){
        ll n1, n2; cin>>n1>>n2;
        bool flag = false;
        if(n1==0 && n2==0){
            cout<<0<<endl;
            flag = true;
        }
        ll x = (n2/2);
        if(n2%2!=0) x++;

        if(x==0) x++;
        ll y = (x*15)-(n2*4);
        if(!flag){
            if(n1<=y){
                cout<<x<<endl;
            }
            else{
                ll z = n1-y;
                x += (z/15);
                if(z%15!=0) x++;
                cout<<x<<endl;
            }
        }
    }

}
int main()
{
    solve();
    return 0;
}