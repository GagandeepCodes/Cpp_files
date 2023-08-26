//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    ll n;
    cin>>n;
    while(n--){
        ll a;
        cin>>a;
        ll p = 8*a + 1;
        ll q = abs(sqrt(p));
        ll r = 1 + q;
        ll s = r/2; // (sqrt(8n+1) + 1)/2
        ll ans = 1;
        if(s%2==0){
            ans*=s/2;
            ans*=(s-1);
            cout<<(s + a - ans)<<endl;
        }
        else{
            ans*=(s-1);
            ans*=(s);
            ans/=2;
            cout<<(s+a-ans)<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}