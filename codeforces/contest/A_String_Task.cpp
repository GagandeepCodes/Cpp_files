#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string res = "";
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u' || s[i]=='y'){
            continue;
        }
        res.push_back('.');
        res.push_back(s[i]);
    }
   cout<<res<<endl;
    return 0;
}