//code aisa likho ki,
//4 log debug krne se dare
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ll long long
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;


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
        ll n,m;cin>>n>>m;
        vector<ll> a(n,0);
        vector<ll> b(n,0);
        ll i=0;
        for(;i<n;i++){
            cin>>a[i];
        }
        i=0;
        for(;i<n;i++){
            cin>>b[i];
        }
        vector<pair<ll,ll> > v;
        i=0;
        for(;i<n;i++){
            pair<ll,ll> p = make_pair(a[i],b[i]);
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        ll maxi=-1;
        i=0; ll j=0; ll sum=0; ll tt=0;
        ll size = 0;
        for(;i<v.size();i++){
            ll num = v[i].first;
            int t = v[i].second;
            sum+=num*t;
            while(sum > m || v[i].first-v[j].first > 1){
                int x = v[j].second;
                int y = v[j].first;
                while((sum>m || v[i].first-v[j].first>1) && x>0){
                    sum-=y;
                    x--;
                }
                j++;
            }
            maxi=max(maxi,sum);
        }
        if(v[size-1].first-v[j].first<=1 && sum<=m){
            maxi=max(maxi,sum);
        }
        cout<<maxi<<endl;
    }
}
int main()
{
    solve();
    return 0;
}