#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums){
    int n = nums.size();
    int res = 0;
    for(int i=n-2;i>=0;i--){
        res += abs(nums[i] - nums[i+1]);
    }
    return res;
}
int main(){
    vector<int> nums {1,2,1,5};
    cout<<f(nums)<<endl;
}