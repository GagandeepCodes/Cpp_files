#include <bits/stdc++.h>
using namespace std;
int order(char c){
    if(c == '^') return 3;
    else if(c=='/' || c=='*') return 2;
    else if(c== '+' || c == '-') return 1;
    return 0; 
}
string f(string &s,stack<char> &st){
    // Input: str = "a+b*(c^d-e)^(f+g*h)-i"
    // Output: abcd^e-fgh*+^*+i-
    int n = s.size();
    string res = "";
    for(int i=0;i<n;i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9')){
            res.push_back(s[i]);
        }
        else if(s[i] == '('){
            st.push('(');
        }
        else if(s[i]==')'){
            while(st.top()!='('){
                res.push_back(st.top());
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && order(s[i]) <= order(st.top())){
                res.push_back(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }

    return res;
}
int main(){
    string s =  "a+b*(c^d-e)^(f+g*h)-i";
    stack<char> st;
    cout<<f(s,st)<<endl;
}