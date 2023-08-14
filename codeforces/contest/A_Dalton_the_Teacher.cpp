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

        int count=0;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==i+1) count++;
        }

        cout<<count/2+count%2<<endl;
    }
    return 0;
}