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
        string s;
        cin>>s;
        int size = s.size();
        string s1 = "";
            for(int i=0;i<2*size;i++){
                if(i%2==0){
                    s1.push_back('(');
                }
                else{
                    s1.push_back(')');
                }
            }
        string s2 = "";
        for(int i=0;i<2*size;i++){
            if(i<size){
                s2.push_back('(');
            }
            else{
                s2.push_back(')');
            }
        }
        size_t found = s2.find(s);
        if(s2.find(s)==string :: npos){
            cout<<"YES"<<endl;
            cout<<s2<<endl;
        }
        else if(s1.find(s)==string::npos){
            cout<<"YES"<<endl;
            cout<<s1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}