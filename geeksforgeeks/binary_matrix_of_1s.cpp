#include<bits/stdc++.h>
using namespace std;

int main()
{
    class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        //code here
        int col = n-1;
        int row = 0;
        for(int i=0;i<n;i++){
            while(mat[i][col]==1 && col>=0){
                col--;//0
                row = i;//1
            }
        }
        return {row,n-col-1};
    }
};
    return 0;
}