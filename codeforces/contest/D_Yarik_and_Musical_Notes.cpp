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
        long long n;
        cin>>n;
        unordered_map<long long,long long> m;
        long long i=0;
        while(i<n){
            int a;
            cin>>a;
            m[a]++;
            i++;
        }
        long long ans=0;
        for(auto it: m) ans+=(it.second*(it.second-1))/2;
        ans+=m[1]*m[2];

        cout<<ans<<endl;
    }
}
int main()
{
    solve();
    return 0;
}