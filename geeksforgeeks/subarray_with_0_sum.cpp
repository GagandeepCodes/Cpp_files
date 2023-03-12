#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            m[sum]++;
            // if the number formed is has been acheived ever before 
            //this means that the their exists some numbers that has cancelled them out.
            if(m[sum]>1 || sum == 0) return true;
        }
        return false;
    }
};
int main()
{
    
    return 0;
}