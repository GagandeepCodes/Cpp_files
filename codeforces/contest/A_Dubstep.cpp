#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int flag = 0;
    for(int i=0;i<n;i++){
        if (s[i]=='W' &&s[i+1]=='U' &&s[i+2]=='B'){
            i+=2;
            if(flag==0){
                 cout<<" ";
                 flag=1;
            }
            continue;
        }
        else{
            flag=0;
            cout<<s[i];
        }
    }
    return 0;
}