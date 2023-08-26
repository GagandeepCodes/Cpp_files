//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int m,k,a1,ak;
        cin>>m>>k>>a1>>ak;
        ll left = m - a1;
        double d = (double)left/k;
        ll tr = ceil(d);
        ll ans = 0;
        if(tr*k > m){
            tr-=1;
        }
        if(tr>ak){
            if(a1>=(m - (tr*k))){
                ans =tr-ak;
            }
            else{
                ans = tr-ak + (m - (tr*k) - a1);
            }
        }
        else{
            if(a1>=(m-(tr*k))){
                ans = 0;
            }
            else{
                ans = (m-(tr*k) -a1);
            }
        }
        cout<<ans<<endl;
    }
}
int main()
{
    solve();
    return 0;
}