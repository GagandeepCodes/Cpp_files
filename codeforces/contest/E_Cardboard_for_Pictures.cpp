//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n,0);
        double  b = 0;
        double c = -1*k;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            c+=(v[i]*v[i]);
            b+=4*v[i];
        }
        double a = 4*n;
        ll ans = (ll)(-1*b+ceil(sqrt(b*b-4*a*c)))/(2*a);
        cout<<ans<<endl;
    }
    return 0;
}