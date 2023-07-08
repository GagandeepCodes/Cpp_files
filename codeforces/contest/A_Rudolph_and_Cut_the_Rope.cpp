//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = 0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a>b){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}