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
    int t;
    cin>>t;
    while(t--){
        int n,k,x;cin>>n>>k>>x;
        vector<int> v(n,0);
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sort(v.begin(),v.end());
        int j=n-1;
        long long int ans=LLONG_MIN;
        while(n-j<=x){
            sum=sum-(2*v[j]);
            j--;
        }
        ans=max(ans,sum);

        int i=n-1;
        while(n-i<=(k)){
            if(j>=0) sum=sum-(2*v[j]);    // 1 2 3 4 5 6 
            sum+=v[i];
            j--;
            i--;
            ans=max(ans,sum);
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