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
        vector<ll> v;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            v.push_back(a);
        }
        ll sum1=0;
        ll sum2=0;
        ll maxi = LLONG_MIN;
        for(int i=0;i<n;i++){
            if(i%2){
                if(v[i]>0){
                    sum1+=v[i];
                    // maxi=max(maxi,v[i]);
                }
            }
            else if((i%2==0)){
                if(v[i]>0){
                    sum2+=v[i];
                    // maxi = max(maxi,v[i]);
                }
            }
        }
        for(int i=0;i<n;i++){
            maxi = max(maxi,v[i]);
        }
        
        ll res = 0;
        if(sum1>sum2){
            res = sum1;
        }
        else{
            res = sum2;
        }
        if(res==0){
            cout<<maxi<<endl;
        }
        else{
            cout<<res<<endl;
        }
    }
    return 0;
}