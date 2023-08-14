//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n,0);
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if((5 - v[i]) >= k){
            ans++;
        }
    }
    cout<<ans/3<<endl;
}
int main()
{
    solve();
    return 0;
}