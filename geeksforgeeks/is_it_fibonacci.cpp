#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long solve(int N, int k, vector<long long> arr) {
        // code here
        long long sum=0;
        //if the term is already a part of the array
        if(k>=N){
            return arr[N-1];
        }
        vector<long long> temp = arr;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        temp.push_back(sum);
        for(int i=k+1;i<N;i++){
            sum+=temp[i-1];
            sum-=temp[i-k-1];
            temp.push_back(sum);
        }
        return sum;
    }
};
int main()
{
    
    return 0;
}