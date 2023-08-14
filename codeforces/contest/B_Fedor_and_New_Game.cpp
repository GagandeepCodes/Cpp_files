//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m+1,0);
    for(int i=0;i<m+1;i++){
        cin>>v[i];
    }
    int ans = 0;
    for(int i=0;i<m;i++){
        if(__builtin_popcount(v[i]^v[m]) <= k) ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    solve();
    return 0;
}