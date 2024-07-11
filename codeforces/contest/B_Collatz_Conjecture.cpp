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

ll fastpow2(ll x) {
    ll res = 1;
    ll a = 2;
    while(x > 0) {
        if(x & 1) {
            res = (res * a) % M;
        }
        a = (a * a) % M;
        x >>= 1;
    }
    return res;
}

ll f(ll x, ll y, ll k) {
    while (k > 0){
        ll o = y - (x % y);
        if (o <= k){
            k -= o;
            x += o;
            while (x % y == 0) x/=y;
        }
        else{
            x += k;
            k = 0;
            return x;
        }
    }
    return x;
}
void solve() {
    int t;
    cin >> t;
    while (t--){
        long long int x, y, k;
        cin >> x >> y >> k;
        ll res = f(x,y,k);
        cout<<res<<endl;
    }

}
int main() {
    fast;
    solve();
    return 0;
}
