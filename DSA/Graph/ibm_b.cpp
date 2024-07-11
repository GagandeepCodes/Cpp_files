#include <bits/stdc++.h>
using namespace std;
string f(string& s, int k)
{
    int n = s.length();
    string result = "";
    int minn = INT_MAX;
    for (int i = 0; i < n; i++) {
        unordered_map<char, int> unmap;
        string s2 = "";
 
        for (int j = i; j < n; j++) {
            if(s[j]=='1'){
                unmap[s[j]]++;
            }
            s2 += s[j];
            if (unmap['1'] == k) {
                if (j - i + 1 < minn) {
                    minn = j - i + 1;
                    result = s2;
                }
                else if( j - i + 1 == minn){
                    result  = min(result , s2);
                }
                break;
            }
        }
    }
    return result;
}
int main(){
    string s; cin>>s;
    int k;cin>>k;
    cout<<f(s,k)<<endl;
}