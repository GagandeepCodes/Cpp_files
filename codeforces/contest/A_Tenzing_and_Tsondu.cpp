//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> ts(n,0);
        vector<int> tz(m,0);
        long long tss = 0;
        long long tzz = 0;
        for(int i=0;i<n;i++){
            cin>>ts[i];
            tss+=ts[i];
        }
        for(int j=0;j<m;j++){
            cin>>tz[j];
            tzz+=tz[j];
        }
        if(tss>tzz){
            cout<<"Tsondu"<<endl;
        }else if(tzz>tss){
            cout<<"Tenzing"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}