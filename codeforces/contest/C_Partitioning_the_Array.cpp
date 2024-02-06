// code aisa likho ki,
// 4 log debug krne se dare
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, b) for (ll i = a; i < b; i++)
const ll M = 1e9 + 7; // 998244353;
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
ll fastpow2(ll x)
{
    ll res = 1;
    // define the value whose power is to be calculated
    ll a = 2;
    while (x > 0)
    {
        if (x & 1)
        {
            res = (res * a) % M;
        }
        a = (a * a) % M;
        x >>= 1;
    }
    return res;
}

vector<ll> div(ll n)
{
    ll i;
    set<ll> s;
    vector<ll> v;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
        }
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            s.insert(n/i);
        }
    }
    set<ll> :: iterator it = s.begin();
    while(it!=s.end()){
        if(*it != 1) v.push_back(*it);
        it++;
    }
    return v;

}
void solve()
{
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> v(n,0);
        ll cnto = 0;
        ll cnte = 0;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2) cnto++;
            else cnte++;
        }
        vector<ll> divi = div(n);

        ll ans = 1;
        for(ll i=0;i<divi.size();i++){
            if(cnto%divi[i]==0 && cnte%divi[i]==0){
                ans++;
            }
        }
        cout<<ans<<endl;

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