#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int goal = nums.size()-1;
        for(int i=n-1;i>=0;i--){
            if(i+nums[i]>=goal){
                goal = i;
            }
        }
        if(goal==0){
            return true;
        }
        return false;
    }
};
int main()
{
    
    return 0;
}