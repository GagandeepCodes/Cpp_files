//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<vector<char> >v(8,vector<char> (8,0));
        string ans = "";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>v[i][j];
                if(v[i][j]!='.'){
                    ans.push_back(v[i][j]);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}