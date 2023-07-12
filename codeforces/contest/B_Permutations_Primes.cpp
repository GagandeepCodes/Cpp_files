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
        if(n==1){
            cout<<1<<endl;
        }
        else if(n==2){
            cout<<2<<" "<<1<<endl;
        }
        else{
            vector<int> ans(n); 
            int cnt=4;
            ans[0]=2;ans[n-1]=3;ans[n/2]=1;

            int i=1;
            while(i<n-1){
                if(i==n/2){
                    i++;
                    continue;
                }
                else{
                    ans[i]=cnt++;
                }
                i++;
            }
            for(int j=0;j<ans.size();j++){
                cout<<ans[j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}