//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,0);
        long long sum=0;
        long long odd_cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]%2==1){
                odd_cnt+=1;
            }
            long long x = odd_cnt/3; 
            long long  y = odd_cnt - x;
            if(i==0){
                cout<<v[i]<<" ";
            }
            else{
                cout<<sum-(y%2)-(x)<<" ";
            }
        }
        cout<<endl;
    }
    // you should actually read the stuff below

        /*
            Programming is like sex,
            you love it untill there's an error.
        */
}
int main()
{
    solve();
    return 0;
}