#include <bits/stdc++.h>
using namespace std;
string f(string s)
{
    stack<string> st;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
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
            string temp = s[i] + op2 + op1;
            st.push(temp);
        }
    }
    ans += st.top();
    return ans;
}
int main()
{
    string s = "ABC/-AK/L-*";
    cout << f(s) << endl;
    return 0;
}