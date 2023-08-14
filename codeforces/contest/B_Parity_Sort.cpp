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
        int n;
        cin>>n;
        vector<int> v(n,0);
        vector<int> temp(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            temp[i] = v[i];
        }
        sort(temp.begin(),temp.end());
        bool flag = false;
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                if(temp[i]%2!=0){
                    flag = true;
                }
            }
            else if(v[i]%2!=0){
                if(temp[i]%2==0){
                    flag = true;
                }
            }
            // if(v[i]%2!=temp[i]%2){
            //     flag = true;
            //     break;
            // }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}