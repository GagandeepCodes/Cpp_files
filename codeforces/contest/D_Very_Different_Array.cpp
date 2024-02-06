//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
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
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<ll> v1(n,0);
        vector<ll> v2(m,0);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<m;i++){
            cin>>v2[i];
        }
        sort(v1.begin(),v1.end());  // 1 2 4 6
        sort(v2.begin(),v2.end()); // 1 2 3 3 5 7   -> 6 5 3 2
        
        ll ans = 0;
        int i=0,j=0,k=n-1,l=m-1;     // 4 6 8 10
        while(i<=k && j<=l){           // 1 3 6 8 9 10
            ll m1 = max(abs(v1[i] - v2[j]), abs(v1[i] - v2[l]));
            ll m2 = max(abs(v1[k] - v2[j]) , abs(v1[k] - v2[l]));

            if(m1>=m2){
                if(abs(v1[i] - v2[j]) > abs(v1[i] - v2[l])){
                    ans+=abs(v1[i]-v2[j]);
                    j++;
                }
                else{
                    ans+=abs(v1[i]-v2[l]);
                    l--;
                }
                i++;
            }
            else{
                if(abs(v1[k] - v2[j]) > abs(v1[k] - v2[l])){
                    ans+=abs(v1[k]-v2[j]);
                    j++;
                }
                else{
                    ans+=abs(v1[k]-v2[l]);
                    l--;
                }
                k--;
            }
        }
        cout<<ans<<endl;
        // 4 6 8 10
        //1 3 6 8 9 10   -> 9 6 5 3
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