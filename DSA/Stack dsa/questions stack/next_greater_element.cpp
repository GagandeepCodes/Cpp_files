#include <bits/stdc++.h>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    // Your code here
    vector<long long> ans;
    stack<long long> st;
    st.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        while (st.size() > 1 && st.top() <= arr[i])
        {
            st.pop();
        }
        ans.push_back(st.top());
        st.push(arr[i]);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{

    return 0;
}