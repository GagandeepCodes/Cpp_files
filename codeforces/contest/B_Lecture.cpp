#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, b) for (ll i = a; i < b; i++)
const int M = 1e9 + 7; //998244353;

void solve()
{
    int n, m;
    cin >> n >> m;
    map<string, string> m1;
    map<string, string> m2;

    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        m1[a] = b;
        m2[b] = a;
    }

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (m1.find(s) != m1.end())
        {
            if (m1[s].length() < s.length())
            {
                // cout << "hello" << endl;
                cout << m1[s] << " ";
            }
            else
            {
                cout << s << " ";
            }
        }
        else
        {
            if (m2.find(s) != m2.end())
            {
                if (m2[s].length() < s.length())
                {
                    // cout << "hello 2" << endl;
                    cout << m2[s] << " ";
                }
                else
                {
                    cout << s << " ";
                }
            }
        }
    }
}

int main()
{
    solve();
    return 0;
}
