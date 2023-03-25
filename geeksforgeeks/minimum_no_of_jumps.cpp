#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int steps = arr[0];
        int max_jumps = arr[0];
        int jumps = 1;
         if(arr[0]==0 && n>1) return -1;
         if(n==1) return 0;
         for(int i=1;i<n;i++){
            if(i==n-1) return jumps;
            if(step!=0){
                max_jumps = max(max_jumps,i+arr[i]);
                steps--;
            }
            if(step==0){
                if(i>=max_jumps) return -1;
                jumps++;
                steps = max_jumps-i;
            }
         }
    }
};
int main()
{
    
    return 0;
}