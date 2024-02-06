//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    long long n;cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else{
            n = (n*3)+1;
            cout<<n<<" ";
        }
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