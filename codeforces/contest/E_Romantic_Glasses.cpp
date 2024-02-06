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
        long long n;
        cin>>n;
        vector<long long> v(n,0);
        map<long long,long long> m;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag = false;
        m[0] = 1;
        long long sum = 0;
        for(int i=0;i<n;i++){ 
            if(i%2==0){
                sum+=v[i];
            }
            else{
                sum-=v[i];  
            }
            if(m[sum]!=0){
                flag = true;
            }
            else{
                m[sum]+=1;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    // you should actually read the stuff below

        /*
            Programming is like sex,
            you love it untill there's an error.                
        */
}
int main()
{
    solve();
    return 0;
}