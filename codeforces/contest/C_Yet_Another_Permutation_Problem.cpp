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
        map<int,bool> m;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            m[i]=true;
            i++;
        }
        int i=1;
        vector<int> v;
        while(i<=n){
            if(m[i]==true){
                for(int j=i;j<=n;j=j*2){
                    m[j]=false;
                    v.push_back(j);
                }
            }
            i++;
        }
        vector<int>::iterator ptr;
        for(ptr = v.begin(); ptr < v.end(); ptr++){
            cout<<*ptr<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    solve();
    return 0;
}