#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      vector<long long int> ans;
      vector<long long int> rows(n,0);
      vector<long long int> cols(n,0);
      long int total = n*n;
      long int new_rows = 0;
      long int new_cols = 0;
      for(auto& a:arr){
          long long int r = a[0]-1;
          long long int c = a[1]-1;
          
          if(!rows[r]){
              new_rows++;
              rows[r] = 1;
              total-=(n-new_cols);
          }
          if(!cols[c]){
              new_cols++;
              cols[c] = 1;
              total-=(n-new_rows);
          }
          ans.push_back(total);
      }
      
      return ans;
  }
};
int main()
{
    
    return 0;
}