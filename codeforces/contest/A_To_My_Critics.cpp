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
        vector<int> v(3,0);
        int mini = INT_MAX;
        ll sum = 0;
        for(int i=0;i<3;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]<mini){
                mini = v[i];
            }
        }
        if(sum-mini>=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}