//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const ll M=1e9+7; //998244353;
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
    ll t;cin>>t;
    while(t--){
        ll n,k,q;cin>>n>>k>>q;
        string s;cin>>s;
        unordered_map<char,ll> m;
        for(ll i=0;i<s.size();i++){
            m[s[i]]++;
        }
        ll sz = m.size();
        char c = 'z';
        bool flag = false;
        vector<char> v;
        if(sz >= k){
            unordered_map<char,ll> :: iterator it = m.begin();
            while(it!=m.end()){
                if(it->second<n){
                    c = it->first;
                    v.push_back(it->first);
                    flag = true;
                }
                it++;
            }
        }
        if(flag==false){
            cout<<"YES"<<endl;
        }
        else{   //aaabbbccc    <---->    abcabcabc
            cout<<"NO"<<endl;
            string ans = "";
            // for(ll j=0;j<v.size();j++){
            //     for(ll i=0;i<n;i++){
            //         ans+=v[j];
            //     }
            // }
            unordered_map<char,ll> q;
            char prev = 'z';
            for(ll i=0;i<s.size();i++){
                q[s[i]]++;
                if(q.size()==k){
                    prev = s[i];
                    ans.push_back(prev);
                    q.clear();
                }
            }
            ll size = ans.size();
            while(size < n){
                ans.push_back(s[0]);
                size++;
            }
            cout<<ans<<endl;
        }
    }
    // you should actually read the stuff below

        /*
            Programming is like sex,
            you love it untill there's an error.
        */
}
int main()
{
    solve();
    return 0;
}

// aabbccabab