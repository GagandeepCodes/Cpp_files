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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v(2);
        cin>>v[0]>>v[1];
        if(n<3){
            cout<<0<<endl;
        }
        else{
            int cnt=0;
            for(int i=1;i<n-1;i++){
                if(v[0][i]=='.'){
                    if(v[0][i-1]=='.' && v[0][i+1]=='.'){
                        if(v[1][i-1]=='x' && v[1][i+1]=='x'){
                            if(v[1][i]=='.'){
                                cnt++;
                            }
                        }
                    }
                }
                if(v[1][i]=='.'){
                    if(v[1][i-1]=='.' && v[1][i+1]=='.'){
                        if(v[0][i-1]=='x' && v[0][i+1]=='x'){
                            if(v[0][i]=='.'){
                                cnt++;
                            }
                        }
                    }
                }
            }
            cout<<cnt<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}