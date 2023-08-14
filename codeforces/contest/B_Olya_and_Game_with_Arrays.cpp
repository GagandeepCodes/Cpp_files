//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a;
        vector<long long> b;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            vector<long long> temp(x,0);
            for(long long i=0;i<x;i++){
                cin>>temp[i];
            }
            sort(temp.begin(),temp.end());
            a.push_back(temp[0]);
            b.push_back(temp[1]);
        }
        ll sum = 0;
        ll mini = INT_MAX;
        sort(b.begin(),b.end());
        for(int i=1;i<b.size();i++){
            sum+=b[i];
        }
        sort(a.begin(),a.end());
        sum+=a[0];
        cout<<sum<<endl;
    }
}
int main()
{
    solve();
    return 0;
}