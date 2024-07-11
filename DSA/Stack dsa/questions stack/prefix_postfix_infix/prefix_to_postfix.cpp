#include<bits/stdc++.h>
using namespace std;
string f(string s)
{
    stack<string> st;
    string ans = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '1' && s[i] <= '9'))
        {
            st.push(string(1, s[i]));
        }
        else
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            string temp = op1 + op2 + s[i];
            st.push(temp);
        }
    }
    ans += st.top();
    return ans;
}
int main(){
    string s = "*-A/BC-/AKL";
    cout<<f(s)<<endl;
    return 0;
}