#include<bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> nums){
        // code here
        // int n = nums.size();
        // int n = nums.size();
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i+1]) {
        i--;
    }
    if (i < 0) {
        reverse(nums.begin(), nums.end());
        return nums;
    }
    int j = n - 1;
    while (j > i && nums[j] <= nums[i]) {
        j--;
    }
    swap(nums[i], nums[j]);
    reverse(nums.begin() + i + 1, nums.end());
    return nums;
    }
};
int main()
{
    
    return 0;
}