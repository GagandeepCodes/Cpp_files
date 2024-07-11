#include<bits/stdc++.h>
using namespace std;
void f(string &s , int k , int len){
    if(k==len){
        cout<<s<<" ";
        return ;
    }

    if(s[len-1]=='1'){
        s.push_back('0');
        f(s,k,len+1);
        s.pop_back();
    }

    if(s[len-1]=='0'){
        //push 0
        s.push_back('0');
        f(s,k,len+1);
        s.pop_back();

        //push 1
        s.push_back('1');
        f(s,k,len+1);
        s.pop_back();
    }
}
int main(){
    int k;cin>>k;
    string s;
    s.push_back('0');
    f(s,k,1);
    s.pop_back();
    s.push_back('1');
    f(s,k,1);
    return 0;
}