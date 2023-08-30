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
        int n,a,q;
        cin>>n>>a>>q;
        string s;
        cin>>s;
        int p = 0;
        int cnt = 0;
        bool flag = false;
        for(int i=0;i<q;i++){
            if(s[i]=='+'){
                p++;
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt+a==n){
                flag=true;
            }
        }
        if(a==n || flag){
            cout<<"YES"<<endl;
        }
        else if(a+p<n){
             cout<<"NO"<<endl;
        }
        else{ 
             cout<<"MAYBE"<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}