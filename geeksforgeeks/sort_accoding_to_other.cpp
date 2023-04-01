#include<bits/stdc++.h>
using namespace std;
vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        vector<int> ans;
        unordered_map<int,int> m;
        for(auto it: A1){
            m[A1]++;
        }
        int pos = 0;
        for(auto it:A2){
            while(m[A2]-- > 0){
                ans[pos++] = it;
            }
        }

        sort(A1.begin(),A1.end());

        for(auto it:A1){
            if(m[it]!=0){
                ans[pos++] = it;
            }
        }

        return ans;
    } 
int main()
{
    
    return 0;
}