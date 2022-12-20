#include <bits/stdc++.h>
using namespace std;
// code here
// we will use stack
// if a opening bracket then we will push it.
// if a closing bracket --> check stack empty or not
// if empty --> not valid
// if not empty --> stack.top() == opening pair of that bracket.
stack<char> st;
for (int i = 0; i < s.length(); i++)
{
    if (s[i] == '(' || s[i] == '{' || s[i] == '[')
    {
        st.push(s[i]);
    }
    else
    {
        if (st.empty())
        {
            // cout<<"Hello"<<endl;
            return 0;
        }
        else
        {
            if (s[i] == ')' && st.top() == '(')
            {
                // cout<<"inside "<<i<<endl;
                st.pop();
            }
            if (s[i] == '}' && st.top() == '{')
            {
                // cout<<"inside "<<i<<endl;
                st.pop();
            }
            if (s[i] == ']' && st.top() == '[')
            {
                // cout<<"inside "<<i<<endl;
                st.pop();
            }
        }
    }
    // cout<<"Hello "<<i<<endl;
}
if (st.empty())
{
    return 1;
}
else
{
    // cout<<"hello"<<endl;
    return 0;
}
int main()
{

    return 0;
}