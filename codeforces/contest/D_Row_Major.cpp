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
        int cnt = n;
        for(ll i=1;i<=n;i++){
            if(n%i!=0){
                cnt = i;
                break;
            }

        }
        if(n==1){
            cout<<"a"<<endl;
        }
        else if(n==2){
            cout<<"ab"<<endl;
        }
        else{
            string ans = "";
            ll x = cnt;
            ll y = n%cnt;
            int i=0;
            ll z = n/cnt;
            for(int i=0;i<z;i++){
                for(int j=0;j<x;j++){
                    ans.push_back(j+'a');
                }
            }
            for(int i=0;i<y;i++){
                ans.push_back(i+'a');
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}