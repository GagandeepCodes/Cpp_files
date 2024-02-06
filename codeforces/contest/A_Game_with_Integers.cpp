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
    while(n--){
        int a;
        cin>>a;
        if(a%3==0){
            cout<<"Second"<<endl;
        }else if((a-1)%3==0){
            cout<<"First"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}