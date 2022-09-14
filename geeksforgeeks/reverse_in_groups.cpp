#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int j = 0;
       for (int i=0;i<n;i++){
           
           if (i%k==0){
               if (i+k<n)
               {
                   j=i+k-1;
               }
               else
               {
                   j=n-1;
               }
           }
           if(j>i)
           {
               swap(arr[i],arr[j]);
           }
           j--;
       }
    }
};
int main()
{
    
    return 0;
}