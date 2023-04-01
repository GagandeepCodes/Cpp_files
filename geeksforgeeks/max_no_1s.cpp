#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int m = 0;
            int j=M-1,i=0;
            while(j<M && i<N){
                if(Mat[i][j]==1){
                    j--;
                    m = i;
                }
                else
                {
                    i++;
                }
            }
            return m;
        }
};
int main()
{
    
    return 0;
}