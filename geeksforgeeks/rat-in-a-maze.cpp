#include <bits/stdc++.h>
using namespace std;
bool isSafe(int x, int y, int n, vector<vector<int> > visited, vector<vector<int> > &m)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int> > &m, int n, vector<string> &ans, int x, int y, vector<vector<int> > visited, string path)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // down
    int nx = x + 1;
    int ny = y;
    if (isSafe(nx, ny, n, visited, m))
    {
        path.push_back('D');
        solve(m, n, ans, nx, ny, visited, path);
        path.pop_back();
    }

    // left
    nx = x;
    ny = y - 1;
    if (isSafe(nx, ny, n, visited, m))
    {
        path.push_back('L');
        solve(m, n, ans, nx, ny, visited, path);
        path.pop_back();
    }

    // right
    nx = x;
    ny = y + 1;
    if (isSafe(nx, ny, n, visited, m))
    {
        path.push_back('R');
        solve(m, n, ans, nx, ny, visited, path);
        path.pop_back();
    }

    // up
    nx = x - 1;
    ny = y;
    if (isSafe(nx, ny, n, visited, m))
    {
        path.push_back('U');
        solve(m, n, ans, nx, ny, visited, path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int> > &m, int n)
{
    // Your code goes here

    vector<string> ans;

    if (m[0][0] == 0)
    {
        string str = "-1";
        ans.push_back(str);
        return ans;
    }

    int srcx = 0;
    int srcy = 0;

    vector<vector<int> > visited = m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<visited[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    // lexographically
    return ans;
}
int main()
{

    return 0;
}