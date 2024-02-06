//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
bool isV(char c){
    return (c == 'a' || c == 'e');
}
bool isC(char c) {
    return (c == 'b' || c == 'c' || c == 'd');
}
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans = "";
        for(int i=0;i<n;i++){
            if(isC(s[i])){
                ans.push_back(s[i]);
                if(i+1 < n && isV(s[i+1])){
                    ans.push_back(s[i+1]);
                    if(i+2 < n && isC(s[i+2])){
                        if(i+3 < n && isV(s[i+3])){
                            ans.push_back('.');
                            i+=1;
                        }
                        else{
                            ans.push_back(s[i+2]);
                            ans+=".";
                            i+=2;
                        }
                    }
                    else{
                        ans+=".";
                        i+=1;
                    }
                }
            }
        }
        ans.pop_back();
        cout<<ans<<endl;
    }
}
int main()
{
    solve();
    return 0;
}