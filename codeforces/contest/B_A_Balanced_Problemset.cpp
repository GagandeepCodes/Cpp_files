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
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void solve(){
    ll t;cin>>t;
    while(t--){
        ll x,n;cin>>x>>n;
        ll a = x/n;
        ll u = x;
        vector<pair<ll,ll> > f;
        vector<ll> v;
        for(ll i=2;i*i<=x;i++){
            ll cnt = 0;
            while(x%i==0){
                x/=i;
                cnt++;
            }
            if(cnt>0){
                v.push_back(i);
                pair<ll,ll> p = make_pair(i,cnt);
                f.push_back(p);
            }
        }
        if(x>1){
            v.push_back(x);
            pair<ll,ll> p = make_pair(x,1);
            f.push_back(p);
        }
        pair<ll,ll> p = make_pair(1,1);
        pair<ll,ll> p1 = make_pair(u,1);
        v.push_back(1);
        v.push_back(u);
        f.push_back(p);
        f.push_back(p1);
        
        for(ll i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }cout<<endl;

        set<ll> s;
        for(ll i=1;i<=sqrt(u);i++){
            if(u%i==0){
                s.insert(i);
                s.insert(u/i);
            }
        }
        
        set<ll> :: iterator it = s.begin();
        while(it!=s.end()){
            cout<<*it<<" ";
            it++;
        }cout<<endl;

        ll ans = 0;
        vector<pair<ll,ll> > :: iterator it = f.begin();
        while(it!=f.end()){
            if(it->first<=a){ //6   7 2 3 2 5 1 420
                // ans+=it->second; 
            }
            it++;
        }
        set<ll> :: iterator i = s.begin();
        set<ll> :: iterator w = s.lower_bound(a);
        while(i!=s.end()){
            if(*i <= a){
                ans++;
            }
            i++;
        }
        if(*w > a) w--;
        cout<<*w<<endl;
    }
    // you should actually read the stuff below

        /*
            Programming is like sex,
            you love it untill there's an error.
        */
}
int  main()
{
    solve();
    return 0;
}