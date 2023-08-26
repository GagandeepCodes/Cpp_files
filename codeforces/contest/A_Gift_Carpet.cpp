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
        int n,m;
        cin>>n>>m;
        vector<string> v;
        for(int i=0;i<n;i++){
            string temp;
            cin>>temp;
            v.push_back(temp);
        }
        vector<string> temp;
        for(int i=0;i<m;i++){
            string st = "";
            for(int j=0;j<n;j++){
                st.push_back(v[j][i]);
            }
            temp.push_back(st);
            // cout<<st<<endl;
        }
        int size = temp.size();
        // for(int i=0;i<size;i++){
        //     cout<<temp[i]<<" ";
        // }cout<<endl;

        string ans = "vika";
        int k = 0;
        bool flag = false;
        for(int i=0;i<size;i++){
            if(temp[i].find(ans[k])!= string::npos){
                k++;
            }
            if(k==4){
                flag = true;
                break;
            }
        }
        if(k==4){
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