//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    string s;cin>>s;
    ll n = s.size();
    ll maxi  = -1;
    ll cnt = 1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else{
            maxi = max(maxi,cnt);
            cnt=1;
        }
    }
    maxi  = max(maxi , cnt);
    cout<<maxi<<endl;
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