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
        vector<int> a(n,0);
        vector<int> b(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int maxi = INT_MIN;
        vector<int> diff;
        for(int i=0;i<n;i++){
            diff.push_back(a[i] - b[i]);
            maxi= max(maxi, a[i]-b[i]);
        }
        int res = 0;
        for(int i=0;i<diff.size();i++){
            if(diff[i] == maxi){
                res++;
            }
        }cout<<res<<endl;
        for(int i=0;i<n;i++){
            if(a[i] - b[i] == maxi){
                cout<<i+1<<" ";
            }
        }cout<<endl;
    }
}
int main()
{
    solve();
    return 0;
}