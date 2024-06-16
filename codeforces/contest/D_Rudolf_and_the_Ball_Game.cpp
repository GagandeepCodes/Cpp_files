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
        ll n,m,x;cin>>n>>m>>x;
        vector<pair<ll,char> > v(m);
        for(ll i=0;i<m;i++){
            ll a;char c;
            cin>>a>>c;
            pair<ll,char> p = make_pair(a,c);
            v[i] = p;
        }
        set<ll> s;
        s.insert(x);
        for(ll i=0;i<m;i++){
            ll d = v[i].first;
            char c = v[i].second;
            set<ll> s1;
            set<ll> :: iterator it = s.begin();
            while(it!=s.end()){
                if(c=='?' || c=='0'){
                    ll nxt = (*it + d - 1)%(n) + 1;
                    s1.insert(nxt);
                }
                if(c=='?' || c=='1'){
                    ll nxt = (*it - d + n - 1)%n + 1;
                    if(nxt==0){
                        nxt = n;
                    }
                    s1.insert(nxt);
                }
                it++;
            }
            s = s1;
        }
        cout<<s.size()<<endl;
        set<ll> :: iterator i = s.begin();
        while(i!=s.end()){
            cout<<*i<<" ";
            i++;
        }
        cout<<endl;
    }
}
int main()
{
    solve();
    return 0;
}
