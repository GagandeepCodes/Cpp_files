#include <bits/stdc++.h>
using namespace std;
string f(string &s,stack<string> &st){
    // ab*c+ 
    // Output: 
    // ((a*b)+c)
    for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
            string res = "";
            res.push_back(s[i]);
            st.push(res);
        }
        else{
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            st.push("(" +  b + s[i] + a + ")");
        }
    }
    string final = st.top();
    st.pop();
    return final;
}
int main(){
    string s="ab*c+";
    stack<string> st;
    cout<<f(s,st)<<endl;
}