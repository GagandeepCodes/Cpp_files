#include<bits/stdc++.h>
using namespace std;
int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        int counter = 0;
        for(auto it: m)
        {
            if(it.second>(n/k))
            {
                counter++;
            }
        }
        
        
        return counter;
    }
int main()
{
    
    return 0;
}