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
        int n,k;
        cin>>n>>k;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int num = v[0];
        int cnt=0;
        int index = 0;
        for(int i=0;i<n;i++){
            if(v[i]==num) cnt++;
            if(cnt==k){
                index = i;
                break;
            }
        }
        if(cnt<k){
            cout<<"NO"<<endl;
            continue;
        }
        else if(cnt>=k){
            if(v[0]==v[n-1]){
                cout<<"YES"<<endl;
                continue;
            }
        }
        int last_cnt = 0;
        for(int i=n-1;i>index;i--){
            if(v[i]==v[n-1]){
                last_cnt++;
            }
        }
        if(last_cnt>=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}