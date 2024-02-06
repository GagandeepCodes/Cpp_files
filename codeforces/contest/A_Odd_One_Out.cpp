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
        int a,b,c;
        cin>>a>>b>>c;
        map<int,int> m;
        m[a]++;
        m[b]++;
        m[c]++;
        map<int,int>::iterator it = m.begin();
        while(it!=m.end()){
            if(it->second==1){
                cout<<it->first<<endl;
            }
            ++it;
        }
    }
}
int main()
{
    solve();
    return 0;
}