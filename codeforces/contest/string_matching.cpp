//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
ll fastpow2(ll x){
    ll res = 1;
    //define the value whose power is to be calculated
    ll a = 2;
    while(x > 0){
        if(x&1){
            res = (res * a) % M;
        }
        a = (a * a) % M;
        x >>= 1;
    }
    return res;
}
void solve(){
    int t;cin>>t;
    while(t--){
        string a,b;cin>>a>>b; //Hello *l?
        int n = a.size();
        int m = b.size();
        bool flag = true;
        int i=0;
        int j=0;
        if(m>n){
            flag = false;
        }
        while(i<n && j<m){
            if(a[i]==b[j] || b[j]=='?'){
                i++;j++;
                continue;
            }
            else if(b[j]=='*'){
                int l = i;
                int r = j;
                while(b[r]=='*' && l<n && r<m){
                    r++;
                }
                int y = m-1;
                while(b[y]=='*'){ //Hello *l*?
                    y--;
                }
                
                if(l==n && r==m){
                    flag = true;
                    break;
                }
                if(b[r]==a[l] || b[r]=='?'){
                    i++;j++;
                    continue;
                }
                else if(a[l]!=b[r]){
                    flag  = false;
                }
            }
            else if(b[j]!=a[i]){
                flag = false;
                break;
            }
            i++;j++;
        }
        if(flag==true){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
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