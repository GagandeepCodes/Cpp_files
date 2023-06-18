#include<bits/stdc++.h>
using namespace std;

int main()
{
    string f;
    string s;
    cin>>f;
    cin>>s;
     transform(f.begin(), f.end(), f.begin(), ::tolower);
     transform(s.begin(), s.end(), s.begin(), ::tolower);
     if(f<s) cout<<-1<<endl;
     else if(f>s) cout<<1<<endl;
     else{
        cout<<0<<endl;
     }
    return 0;
}