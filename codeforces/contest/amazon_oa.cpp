#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums){
    int n = nums.size();
    unordered_map<int,int> m;
    for(auto it:nums) m[it]++;
    sort(nums.begin(),nums.end());
    int range = nums.back();
    int ans = 0;
    for(int i=1;i<=range;i++){
        for(int j=1;j<=sqrt(i);j++){
            int num = i*j;
            if(m.find(num)!=m.end()){
                ans++;
            }
        }
    }
    return ans*2;
}
int main(){
    vector<int> nums{1,2,3,4,5};
    int ans = solve(nums);
    cout<<ans<<endl;
}