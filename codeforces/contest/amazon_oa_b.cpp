#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int k,vector<int> nums){
    int n = nums.size();
    vector<int> pre(n+1,0);
    vector<int> suf(n+1,0);
    for(int i=0;i<n;i++){
        pre[i+1] = pre[i] + nums[i];
    }
    for(int i=n-1;i>=0;i--){
        suf[i-1] = suf[i] + nums[i];
    }
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        int num = pre[i] + (suf[i] - suf[n-i-1]);
        ans[i] = num;
    }
    return ans;
}
int main(){
    int n = 5;
    vector<int> nums{1,2,3,4,5};
    vector<int> ans = solve(5,nums);

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}