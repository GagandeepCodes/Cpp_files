//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
        string s;
        cin>>s;
        int d = -1;
        for(int i=0;i<s.size()-1;i++){
            if((s[i] - '0')%2==0  && s[i] < s[s.size()-1]){
                d = i;
                break;
            }
        }
        if(d==-1){
            for(int i=s.size()-2;i>=0;i--){
                if((s[i] - '0')%2==0){
                     d=i;
                     break;
                }
            }
        }
        if(d==-1){
            cout<<-1<<endl;
        }
        else{
            swap(s[d],s[s.size()-1]);
            cout<<s<<endl;
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