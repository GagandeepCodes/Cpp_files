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
        vector<int> ans;
        ans.push_back(v[0]);
        for(int i=1;i<n;i++){
            if(v[i]>=v[i-1]){
                ans.push_back(v[i]);
            }
            else{
                ans.push_back(1);
                ans.push_back(v[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
}
int main()
{
    solve();
    return 0;
}