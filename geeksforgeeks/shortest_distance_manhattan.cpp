#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int n, int m) {
        // code here
        vector<pair<int,int>> x,y;
        int distance  = 0;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'){
                    x.push_back({i,j});
                }
                else if(grid[i][j]=='Y'){
                    y.push_back({i,j});
                }
            }
        }
        int xnum = x.size();
        int ynum = y.size();
        for(int i=0;i<xnum;i++){
            for(int j=0;j<ynum;j++){
                mini = min(mini,(abs(x[i].first - y[j].first) + abs(x[i].second - y[j].second)));
                if(mini==1){
                    return mini;
                }
            }
        }
        return mini;
    }
};
int main()
{
    
    return 0;
}