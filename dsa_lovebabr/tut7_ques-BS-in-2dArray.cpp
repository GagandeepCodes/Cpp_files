#include<bits/stdc++.h>
using namespace std;
bool searchmatrix(vector<vector<int> > &matrix, int target) 
{
    int row = matrix.size();      // 1  2  3  4
    int col = matrix[0].size();   // 5  6  7  8
                                  // 9 10 11 12

    int start = 0;
    int end = row*col - 1;

    int mid = start + (end - start)/2;

    while(start <= end)
    {
        int element = matrix[mid/col][mid%col]; // mid/col will give the row , mid%col will position of element in the row

        if(element==target)
        {
            return 1;
        }

        else if(element<target)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1 ;
        }

        mid = start + (end - start)/2;  
    }


}
int main()
{

}
