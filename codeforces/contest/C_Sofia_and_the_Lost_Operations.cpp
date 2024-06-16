//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
ll fastpow2(ll x){
    ll res = 1;
    //define the value whose power is to be calculated
    ll a = 2;
    while(x > 0){
        if(x&1){
            res = (res * a) % M;
        }
        a = (a * a) % M;
        x >>= 1;
    }
    return res;
}
void solve(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int> st;
        vector<int> b(n,0);
        for(int i=0;i<n;i++){
            cin>>b[i];
            st.insert(b[i]);
        }
        int m;cin>>m;
        int ls = -1;
        vector<int> d(m,0);
        map<int,int> mp;
        for(int i=0;i<m;i++){
            cin>>d[i];
            ls = d[i];
            mp[d[i]]++;
        }
        bool ans = st.count(ls);
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(mp[b[i]]==0) ans = false;
                mp[b[i]]--;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main()
{
    solve();
    return 0;
}