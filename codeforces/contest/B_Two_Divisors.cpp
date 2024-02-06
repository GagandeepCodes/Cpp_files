//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const long long M=1e9+7; //998244353;
void solve(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;

        long long int lcm=(a*b)/__gcd(a,b);

        if(lcm==max(a,b)){
            cout<<lcm*(max(a,b)/min(a,b))<<endl;
        }
        else cout<<lcm<<endl;
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