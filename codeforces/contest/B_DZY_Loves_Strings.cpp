//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const long long M=1e9+7; //998244353;
void solve(){
    string s;cin>>s;
    long long k;cin>>k;
    map<char,long long> m;
    vector<pair<long long,char> > v;
    for(long long i=0;i<26;i++){
        long long a;
        cin>>a;
        pair<long long,char> p = make_pair(a,'a'+i);
        m['a'+i] = a;
        v.push_back(p);
    }
    long long ans = 0;
    for(long long i=0;i<s.size();i++){
        ans+= (m[s[i]] * (i+1));
        // cout<<m[s[i]]<<" "<<i+1<<endl;
    }
    sort(v.begin(),v.end());
    long long l = v.size();
    long long q = s.size();
    for(long long i=0;i<k;i++){
        ans+= (v[l-1].first * (q+1));
        // cout<<v[l-1].first<<" "<<q+1<<endl;
        s.push_back(v[l-i-1].second);
        q++;
    }
    cout<<ans<<endl;
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