#include <bits/stdc++.h>
using namespace std;
vector<int> leftSmaller(int n, int a[])
{
    // code here
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        while (s.top() != -1 && s.top() >= a[i])
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(a[i]);
    }
    return ans;
}
int main()
{

    return 0;
}