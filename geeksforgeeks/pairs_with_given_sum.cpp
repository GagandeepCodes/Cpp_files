#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here
        unordered_map<int,int> m;
        vector<pair<int,int>> ans;
        for(int i=0;i<N;i++){
            m[A[i]]++;
        }
        for(int i=0;i<M;i++){
            if(m.find(X-B[i])!=m.end()){
                ans.push_back({X-B[i],B[i]});
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main()
{
    
    return 0;
}