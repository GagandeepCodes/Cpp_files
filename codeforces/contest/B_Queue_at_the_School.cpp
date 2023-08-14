//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    while(t--){
        for (int i = 0; i < s.size()-1; i++)
        {
            /* code */
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
        
    }
    cout<<s<<endl;
}
int main()
{
    solve();
    return 0;
}