#include <bits/stdc++.h>
using namespace std;
vector <int> spiralorder(vector<vector <int> > &matrix)
{
    vector <int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row*col-1;

    int sr = 0;
    int sc = 0;
    int er = row -1;
    int ec = col -1;

    while(count <= total)
    {
        // starting row
        for(int index = sc; count < total && index<=ec;index++)
        {
            ans.push_back(matrix[sr][index]);
            count++;
        }
        sr++;

        // ending col
        for(int index=sr;count < total && index>=er;index++)
        {
            ans.push_back(matrix[index][ec]);
            count++;
        }
        ec--;

        //ending row
        for(int index=ec;count < total && index>=sc;index--)
        {
            ans.push_back(matrix[er][index]);
            count++;
        }
        er--;

        //starting col
        for(int index = er;count < total && index>=sr;index--)
        {
            ans.push_back(matrix[index][sc]);
            count++;
        }
        sc++;
    }
    return ans;
    
}
int main()
{}