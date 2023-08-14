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
            vector<int> b;
            vector<int> c;
            map<int,int> m;
            for(int i=0;i<n;i++){
                cin>>v[i];
                m[v[i]]++;
            }
            if(m.size()==1){
                cout<<-1<<endl;
                continue;
            }
            map<int, int>::iterator it = m.begin();
            for(int i=0; i<it->second; i++){
                b.push_back(it->first);
            }
            it++;
            while(it!=m.end()){
                int x = it->second;
                while(x--){
                    c.push_back(it->first);
                }
                it++;
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }cout<<endl;
    }
}
int main()
{
    solve();
    return 0;
}