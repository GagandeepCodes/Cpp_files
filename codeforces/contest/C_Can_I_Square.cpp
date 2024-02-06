//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            long long  ai;
            cin >> ai;
            sum += ai;
        }
        double sl  = sqrt(sum);
        long long x = floor(sl);
        if(x == sl){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}