#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    // sort(s.begin(),s.end());
    // cout<<s<<endl;
    vector<int> v;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='1' || s[i]=='2' || s[i] =='3'){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    string res = "";
    if(v.size()==1){
        res.push_back(v[0]);
        cout<<res<<endl;
    }
    else{
        for(int i=0;i<v.size();i++){
            res.push_back(v[i]);
            res.push_back('+');
        }
        res.pop_back();
         cout<<res<<endl;
    }
    return 0;
}