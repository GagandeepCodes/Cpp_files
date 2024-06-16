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
        string s;cin>>s;
        string r = "";
        set<char> st;
        for(int i=0;i<n;i++){
            if(st.find(s[i])==st.end()){
                r+=s[i];
                st.insert(s[i]);
            }
        }
        sort(r.begin(),r.end());
        // cout<<r<<endl;
        map<char,char> m;
        for(int i=0;i<r.size();i++){
            m[r[i]] = r[r.size()-i-1];
        }
        for(int i=0;i<r.size();i++){
            m[r[r.size()-i-1]] = r[i];
        }
        // map<char,char>::iterator it;
        // for(it=m.begin();it!=m.end();it++){
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        string ans = "";
        for(int i=0;i<n;i++){
            ans+=m[s[i]];
        }
        // cout<<endl;
        cout<<ans<<endl;
    }
}
int main()
{
    solve();
    return 0;
}