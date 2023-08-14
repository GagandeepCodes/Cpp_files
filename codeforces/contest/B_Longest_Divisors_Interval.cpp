//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll maxi = 0;
        ll cnt = 1;
        for(ll i=2;i*i<=100000000;i++){
            if(n%i==0){
                cnt++;
            }
            else{
                maxi = max(maxi,cnt);
                cnt=0;
                break;
            }
        }
        maxi = max(maxi,cnt);
        cout<<maxi<<endl;
    }
    return 0;
}