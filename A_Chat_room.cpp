#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ahhellllloou
    /*
        h->1
        e->3
        l->4
        o->9
        u->11
    */
    string s;
    cin >> s;
    string input = "hello";
    int n = s.size();
    int j = 0;
    int i = 0;
    int cnt = 0;
    while(i<n){
        if(s[i]==input[j]){
            i++;
            j++;
            cnt++;
        }
        else{
            i++;
        }
    }
    if(cnt==5) cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}