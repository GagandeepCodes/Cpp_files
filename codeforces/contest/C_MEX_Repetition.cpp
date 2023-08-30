// code aisa likho ki,
// 4 log debug krne se dare
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, b) for (ll i = a; i < b; i++)
const ll M = 1e9 + 7; // 998244353;
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n, 0);
        vector<ll> temp(n, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            temp[i] = v[i];
        }
        ll mex = 0;
        sort(temp.begin(), temp.end());
        for (ll i = 0; i < n; i++)
        {
            if (i != temp[i])
            {
                mex = i;
                break;
            }
        }
        vector<ll> ans(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            ans[i + 1] = v[i];
        }
        ans[0] = mex;
        vector<int> res(n + 1, INT_MIN);
        int j = 0;
        while (j <= n)
        {
            int x = j + k;
            if (n<x)
            {
                res[(x) % (n + 1)] = ans[j];
            }
            else
            {
                res[x] = ans[j];
            }
            j++;
        }
        int i = 1;
        while (i <= n)
        {
            cout << res[i] << " ";
            i++;
        }
        cout << endl;
    }
}
int main()
{
    solve();
    return 0;
}