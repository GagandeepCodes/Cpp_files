#include<bits/stdc++.h>
using namespace std;
string f(string &s){
    // Input: 
    // *-A/BC-/AKL
    // Output: 
    // ((A-(B/C))*((A/K)-L))
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--){
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
            st.push("(" + a + s[i] + b + ")");
        }
    }
    string final = st.top(); st.pop();
    return final;
}
int main(){
    string s = "*-A/BC-/AKL";
    cout<<f(s)<<endl;
}