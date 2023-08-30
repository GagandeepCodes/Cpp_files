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
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        map<int,bool> m;
        int ans = 0;
        for(auto it:v){
            if(m[it-1]==true){
                m[it-1]=false;
                m[it] = true;
            }
            else{
                m[it]=true;
                ans++;
            }
        }
        cout<<(ans-1)<<endl;
    }
}
int main()
{
    solve();
    return 0;
}