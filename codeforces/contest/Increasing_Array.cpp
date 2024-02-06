//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const long long M=1e9+7; //998244353;
void solve(){
    long long n;cin>>n;
    vector<long long> v(n,0);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long maxi = 0;
    for(long long i=1;i<n;i++){
        if(v[i] < v[i-1]){
            long long curr = v[i-1] - v[i];
            maxi+=curr;
            v[i]+=curr;
        }
    }
    cout<<maxi<<endl;
    // 3 2 5 1 7
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