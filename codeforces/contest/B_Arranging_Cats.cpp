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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        string s1,s2;
        cin>>s1;
        cin>>s2;

        ll cnt1=0,cnt2=0;
        ll dif=0;
        for(ll i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                dif++;
            }
            if(s1[i]=='1'){
                cnt1++;
            }
            if(s2[i]=='1'){
                cnt2++;
            }
        }
        ll x=abs(cnt1-cnt2);
        if(x>=dif){
            cout<<x<<endl;
        }
        else {
            dif=dif-x;
            cout<<x+(dif/2)+dif%2<<endl;
        }
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