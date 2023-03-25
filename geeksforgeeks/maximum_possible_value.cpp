#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        long long total = 0;
        long long ans = 0;
        int mini = INT_MAX;
        for(int i=0;i<N;i++){
            if(B[i]%2){
                B[i]--;
            }
            if(B[i]>0){
                total+=B[i];
                ans+=A[i]*B[i];
                // cout<<ans<<endl;
                mini = min(mini,A[i]);
            }
        }
        if(total%4!=0){
            // cout<<"ues"<<endl;
            ans-=2*mini;
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}