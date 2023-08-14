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
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans = 0;
        for(int i=n-1;i>=1;i--){
            if(v[i] >= v[i-1]){
                continue;
            }
            else{
                ans = max(ans,v[i-1]);
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