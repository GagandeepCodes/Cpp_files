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
#define rfr(n) for(ll i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5;

ll fastpow2(ll x){
    ll res = 1;
    ll a = 2;
    while(x > 0){
        if(x & 1){
            res = (res * a) % M;
        }
        a = (a * a) % M;
        x >>= 1;
    }
    return res;
}

bool check (string a, string b){
    ll n = a.size(), m = b.size();
    ll j = 0;
    for(ll i = 0; i < n && j < m; ++i){
        if(a[i] == b[j]){
            j++;
        }
    }
    return j == m;
}

bool check2(string a,string b){
    return b.find(a)!=string::npos;
}

ll lcs(string X, string Y, ll m, ll n, vector<vector<ll> >& dp){
    if(m == 0 || n == 0)
        return 0;
    if(dp[m][n] != -1)
        return dp[m][n];
    if(X[m-1] == Y[n-1])
        return dp[m][n] = 1 + lcs(X, Y, m-1, n-1, dp);
    else
        return dp[m][n] = max(lcs(X, Y, m-1, n, dp), lcs(X, Y, m, n-1, dp));
}

void solve(){
    ll t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        ll n = a.size();
        ll m = b.size();
        ll j = 0;
        ll ans = m;
        while( j < m){
            ll k = j,i=j;
            ll u = 0;
            while( u < n && i<m){
                if(a[u] == b[i]){
                    i++;
                }
                u++;
            }
            j++;
            ans = min(ans,k+m-i);
        }
        cout<<ans+n<<endl;
    }
}

int main(){
    fast;
    solve();
    return 0;
}
