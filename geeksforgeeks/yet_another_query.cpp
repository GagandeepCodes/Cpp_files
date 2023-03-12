#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
        map<int,int> m;
        vector<int> freq(N,0);
        for(int i=N-1;i>=0;i--){
            m[A[i]]++;
            freq[i]=m[A[i]];
        }
        // for(auto it:freq){
        //     cout<<it<<endl;
        // }
        vector<int> ans;
        for(int i=0;i<num;i++){
            int l = Q[i][0];
            int r = Q[i][1];
            int k = Q[i][2];
            int cnt=0;
            for(int j=l;j<=r;j++){
                if(freq[j]==k){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}