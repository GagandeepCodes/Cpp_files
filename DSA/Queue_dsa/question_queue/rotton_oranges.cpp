#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();
        int time = 0;
        queue<pair<int, int>> q;
        int rotton = 0;
        int fresh = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({i, j});
                    grid[i][j] = -1;
                    rotton++;
                }
                else if (grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }
        if (fresh == 0)
        {
            return 0;
        }
        if (fresh == 0 && rotton != 0)
        {
            return 0;
        }
        if (fresh != 0 && rotton == 0)
        {
            return -1;
        }
        int rottonLater = 0;
        while (!q.empty())
        {
            time++;
            int size = q.size();
            for (int k = 0; k < size; k++)
            {

                int i = q.front().first;
                int j = q.front().second;

                // up
                if (i - 1 >= 0 && grid[i - 1][j] == 1)
                {
                    q.push({i - 1, j});
                    rottonLater++;
                    grid[i - 1][j] = -1;
                }
                // down
                if (i + 1 < rows && grid[i + 1][j] == 1)
                {
                    q.push({i + 1, j});
                    rottonLater++;
                    grid[i + 1][j] = -1;
                }
                // left
                if (j - 1 >= 0 && grid[i][j - 1] == 1)
                {
                    q.push({i, j - 1});
                    rottonLater++;
                    grid[i][j - 1] = -1;
                }
                // right
                if (j + 1 < cols && grid[i][j + 1] == 1)
                {
                    q.push({i, j + 1});
                    rottonLater++;
                    grid[i][j + 1] = -1;
                }
                q.pop();
            }
        }
        if (fresh != rottonLater)
        {
            return -1;
        }
        else
        {
            return time;
        }
    }
};
int main()
{

    return 0;
}