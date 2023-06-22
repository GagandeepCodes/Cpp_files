#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        if(s==t){
            cout<<0<<endl;
            continue;
        }
        string h = s;
        reverse(h.begin(),h.end());
        if(h==t){
            cout<<2<<endl;
            continue;
        }
        int f=0,r=0;
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                f++;
            }
            if(s[i]!=t[n-1-i]){
                r++;
            }
        }
        if(f==r){
            cout<<2*f-1<<endl;
            continue;
        }
        if(f<r){
            if(f%2){
                cout<<2*f-1<<endl;
            }
            else{
                cout<<2*f<<endl;
            }
        }else{
            if(r%2){
                cout<<2*r<<endl;
            }
            else{
                cout<<2*r-1<<endl;
            }
        }

    }
    return 0;
}