#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] > b[i])
            {
                x += a[i];
            }
            else
            {
                y += b[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            if (a[i] == -1)
            {
                if (x > y)
                {
                    x += a[i];
                }
                else
                {
                    y += a[i];
                }
            }
            else if (a[i] == 1)
            {
                if (x > y)
                {
                    y += a[i];
                }
                else
                {
                    x += a[i];
                }
            }
        }
    }
    cout << min(x, y) << endl;
}
int main()
{
    solve();
    return 0;
}