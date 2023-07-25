//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi = INT_MIN;
        int index = 0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a<=10){
                if(b>=maxi){
                    index = i+1;
                    maxi = max(maxi,b);
                }
            }
        }
        cout<<index<<endl;
    }
    return 0;
}