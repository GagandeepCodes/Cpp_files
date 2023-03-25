#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int res = 0;
        int l=0,r=0;
        int max_jump = 0;
        while(r<nums.size()-1){
            max_jump = 0;
            for(int i=l;i<=r;i++){
                max_jump = max(max_jump,i+nums[i]);
            }
            l = r+1;
            r = max_jump;
            res+=1;  
        }
        return res;
    }
};
int main()
{
    
    return 0;
}