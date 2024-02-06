//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const long long M=1e9+7; //998244353;
void solve(){
    long long n;cin>>n;
    if(n%4==1 || n%4==2){
        cout<<"NO"<<endl;
    }
    else if(n%4==0){
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        for(long long i=1;i<=n/4;i++){
            cout<<i<<" ";
        }
        for(long long i=n;i > (n - n/4) ;i--){
            cout<<i<<" ";
        } cout<<endl;
        cout<<n/2<<endl;
        for(long long i= (n/4 + 1) ; i <= (n - n/4) ;i++){
            cout<<i<<" ";
        }cout<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<(n/2 + 1)<<endl;
        for(long long i=1;i<= n/2; i+=2){
            cout<<i<<" ";
        }
        for(long long i= n/2 + 1;i<n;i+=2){
            cout<<i<<" ";
        }cout<<endl;
        cout<< n/2<<endl;
        for(long long i=2;i<= n/2 ;i+=2){
            cout<<i<<" ";
        }
        for(long long i= n/2 + 2;i<=n ;i+=2){
            cout<<i<<" ";
        }cout<<endl;
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