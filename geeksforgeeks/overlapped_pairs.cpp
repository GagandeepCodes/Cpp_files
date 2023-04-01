#include<bits/stdc++.h>
using namespace std;
sort(intervals.begin(), intervals.end());
     
        vector<vector<int>> ans;
     
        int currStart = intervals[0][0];
        int currEnd = intervals[0][1];
     
        for(int i=1; i<intervals.size(); i++) {
            int newStart = intervals[i][0];
            int newEnd = intervals[i][1];
         
            if(newStart <= currEnd) { // overlapped intervals
                currEnd = max(currEnd, newEnd);
            }
            else { // not overlapped
                ans.push_back({currStart, currEnd});
                currStart = newStart;
                currEnd = newEnd;
            }
        }
     
        ans.push_back({currStart, currEnd});
        return ans;
int main()
{
    
    return 0;
}