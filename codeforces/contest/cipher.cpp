#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string res = "";
        int j=1;
        //abacabac
        //gabcgaxyzagpqrgaweranqwen
        int i=0;
        while(i<n){
            while(s[j]!=s[i] && j<n){
                j++;
            }
            res.push_back(s[j]);
            j++;
            i=j;
            j++;
            // if(j<n-1){
            //     j++;
            //     i=j;
            //     if(j<n){
            //         j++;
            //     }
            // }
            // if(j==n-1){
            //     i=n;
            //     break;
            // }
        }
        cout<<res<<endl;
    }
}