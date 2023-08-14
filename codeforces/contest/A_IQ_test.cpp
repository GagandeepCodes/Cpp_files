//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    int ocnt=0,ecnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2) ocnt++;
        else ecnt++;
    }
    int ans = 0;
    if(ecnt>ocnt){
        for(int i=0;i<n;i++){
            if(v[i]%2){
                cout<<i+1<<endl;
                return ;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                cout<<i+1<<endl;
                return ;
            }
        }
    }
}
int main()
{
    solve();
    return 0;
}