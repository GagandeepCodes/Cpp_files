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
        int n,m,k;
        cin>>n>>m>>k;
        int a,b;
        cin>>a>>b;
        vector<vector<int> > v;
        for(int i=0;i<k;i++){
            vector<int> temp;
            int x,y;
            cin>>x>>y;
            temp.push_back(x);
            temp.push_back(y);
            v.push_back(temp);
        }
        bool flag = false;
        for(int i=0;i<k;i++){
            if((abs(v[i][0]-a)+abs(v[i][1]-b))%2==0){
                cout<<"NO"<<endl;
                flag = true;
                break;
            }
        }
        if(flag==false) cout<<"YES"<<endl;
    }
    return 0;
}