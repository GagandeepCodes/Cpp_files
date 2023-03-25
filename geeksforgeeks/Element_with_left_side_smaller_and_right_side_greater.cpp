#include<bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n) {
    int prefix_max[n];
    int suffix_min[n];
    int maxi = arr[0];
    int mini = arr[n-1];
    
    prefix_max[0] = arr[0];
    suffix_min[n-1] = arr[n-1];
    
    for(int i=1;i<n;i++){
       prefix_max[i] = max(arr[i-1],prefix_max[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        suffix_min[i] = min(suffix_min[i+1],arr[i+1]);
    }

    for(int i=1;i<n-1;i++){
        if(arr[i]>=prefix_max[i] && arr[i]<=suffix_min[i]){
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    
    return 0;
}