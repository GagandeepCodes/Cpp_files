#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0;
        int e = numbers.size()-1;
        vector<int> ans;
        
        while (s<e)
        {
            if(numbers[s] + numbers[e] == target)
            {
                ans.push_back(s+1);
                ans.push_back(e+1);
                break;
            }

            else if(numbers[s] + numbers[e] > target)
            {
                e-=1;
            }
            else
            {
                s +=1;
            }

        }

        return ans;
    }

int main(){
    return 0;
}