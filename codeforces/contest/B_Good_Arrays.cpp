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
        int n;
        cin>>n;
        vector<int> v(n,0);
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>v[i];
            m[v[i]]++;
        }
        map<int, int>::iterator it = m.begin();
        bool flag = false;
        while(it!=m.end()){
            if(it->second > n/2){
                cout<<"NO"<<endl;
                flag = true;
                break;
            }
            ++it;
        }
        if(flag==false) cout<<"YES"<<endl;
    }
}
int main()
{
    solve();   
    return 0;
}