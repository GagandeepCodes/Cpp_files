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
        int n;cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int num = *max_element(v.begin(),v.end());
        if(num>n){
            cout<<"NO"<<endl;
            continue;
        }
        vector<int> temp(n+1,0);
        for(int i=0;i<n;i++){
            temp[0]++;
            temp[v[i]]--;
        }
        for(int i=1;i<n;i++){
            int x = temp[i]  +temp[i-1];
            temp[i] = x;
        }
        bool flag = false;
        for(int i=0;i<n;i++){
            if(temp[i]!=v[i]){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}