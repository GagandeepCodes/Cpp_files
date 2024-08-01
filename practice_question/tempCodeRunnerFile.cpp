#include<bits/stdc++.h>
using namespace std;

int solver(string s, int i, map<char, int>& m){
    if(i==s.length() || m[s[i]]) return 0;
    else{
        m[s[i]]++;
        return 1+solver(s, i+1, m);
    }
}
int main(){
    string s; cin>>s;
    int ans = 0;
    for(int i=0; i<s.length(); i++){
        map<char, int>m;
        m[s[i]]++;
        ans++;
        ans += solver(s, i+1, m);
    }
    cout<<ans<<endl;
    return 0;
}