#include<bits/stdc++.h>
using namespace std;
// Function to return maximum XOR subset in set[]

class Solution
{
    public:
    int maxSubsetXOR(int arr[], int N)
    {
        //Your code here
        if(N == 0) return 0;
        int x = 0;
        while(true)
        {
            int y = *max_element(arr,arr+N);
            if(y == 0) return x;
            x = max(x,x^y);
            for(int i=0;i<N;i++)
            {
                arr[i] = min(arr[i],arr[i]^y);
                // cout<<arr[i]<<endl;
            }
        }
    }
};
int main()
{
    
    return 0;
}