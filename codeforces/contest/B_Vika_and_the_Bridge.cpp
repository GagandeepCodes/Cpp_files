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
        int n,k;
        cin>>n>>k;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int i=1;
        int j=0;
        int maxi = 0;
        while(j<v.size() && i<v.size()){
            if(v[i]!=v[j]){
                i++;
            }
            if(v[i]==v[j]){
                maxi = max(maxi,i-j-1);
                ++j;
                i=j;
                ++i;
            }
            if(i==n-1 && maxi!=0){
                ++j;
                i=j;
                ++i;
            }
        }
        cout<<(maxi/2)<<endl;
    }
    return 0;
}