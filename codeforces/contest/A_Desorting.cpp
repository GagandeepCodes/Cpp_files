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
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag = false;
        int mini = INT_MAX;
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i]<0){
                flag = true;
            }
            mini = min(mini,v[i+1]-v[i]);
        }
        if(flag) cout<<0<<endl; 
        else cout<<(mini/2+1)<<endl;
    }
    return 0;
}