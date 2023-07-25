//code aisa likho ki,
//4 log debug krne se dare

/*
    Programming is like sex: 
        You love it untill you makes a mistake.
          ~ Gagandeep Bhardwaj   
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,k;
        cin>>a>>k;
        vector<int> v(a,0);
        for(int i=0;i<a;i++){
            cin>>v[i];
        }
        if(a==1){
            cout<<0<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        int maxi = 1;
        int i=0;
        int j=0;
        int len = 1;


        while(i<a-1){
            if(v[i+1]-v[i] <= k){
                while(v[i+1]-v[i]<=k && i<a-1){
                    len++;
                    i++;
                }
            }
            else{
                i++;
            }
            if(len>=maxi){
                maxi = len;
            }
            len = 1;
        }
        int ans = a - maxi;
        cout<<ans<<endl;
    }
    return 0;
}