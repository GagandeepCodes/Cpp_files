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
typedef long long int ll;
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

unordered_map<string, priority_queue<string, vector<string>, greater<string>>> adj;
vector<string> ans;

void addEdge(const string& a, const string& b) {
    adj[a].push(b);
}

void dfs(const string& str) {
    auto& set = adj[str];
    while (!set.empty()) {
        string temp = set.top();
        set.pop();
        dfs(temp);
    }
    ans.push_back(str);
}
void solve(){
    int n,m; cin>>n>>m;
    for (int i = 0; i < n; i++) {
        string src, des;
        cin >> src >> des;
        addEdge(src, des);
    }
    dfs("ABC");
    reverse(ans.begin(), ans.end());
    for (const string& s : ans) {
        cout << s << " ";
    }
    cout << endl;
}
int main()
{
    solve();
    return 0;
}