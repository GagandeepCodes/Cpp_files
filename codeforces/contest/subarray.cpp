//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
const int M=1e9+7; //998244353;

//2 3 4 3 4
class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int maxi = 0;
        for(int i=0;i<n;i++){
            if(i%2==0 && nums[i+1]-nums[i]==1){

            }
            else if(i%2==1 && nums[i+1]-nums[i]==-1){

            }
            else{
                maxi = max(maxi,i-j+1);
                j=i;
                i--;
            }
        }
        return maxi;
    }
};
int main()
{
    
    
    return 0;
}