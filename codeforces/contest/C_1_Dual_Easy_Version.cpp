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
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt = 0;
        vector<pair<int,int> > vp;
        for(int i=0;i<n;i++){
            if(v[i+1]>=v[i]){
                continue;
            }
            else{
                if(v[i]+v[i]>=v[i-1]){
                    v[i]+=v[i];
                    vp.push_back({i+1,i+1});
                }
                else{
                    v[i]+=v[i-1];
                    vp.push_back({})
                }
            }
        }
    }
    return 0;
}