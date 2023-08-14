//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k,h;
        cin>>n>>m>>k>>h;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            if(abs(h-v[i])==0){
                continue;
            }
            if(abs(h-v[i])%k==0){
                if(abs(h-v[i])/k < m){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}