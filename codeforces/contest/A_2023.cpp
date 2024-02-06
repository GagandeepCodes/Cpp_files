//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const long long M=1e9+7; //998244353;
void solve(){
     int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n+1);
        ll pro = 1;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pro*= arr[i];
        }
        if(2023%pro){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=1;i<k;i++){
                cout<<1<<' ';
            }
            cout<<(2023/pro)<<endl;
        }
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