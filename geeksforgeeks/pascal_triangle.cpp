class Solution{
public:
    ll mod = 1000000000 + 7;
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<ll> > ans;
        vector<ll> temp;
        temp.push_back(1);
        ans.push_back(temp);
         if(n==1){
             return temp;
         }
         
         temp.push_back(1);
         ans.push_back(temp);
         
         if(n==2){
             return temp;
         }
         
         for(int i=2;i<n;i++){
             vector<ll> curr;
             curr.push_back(1);
             for(int j=0;j<=i-2;j++){
                curr.push_back(((ans[i-1][j])%mod + (ans[i-1][j+1])%mod)%mod); 
             }
             curr.push_back(1);
             ans.push_back(curr);
         }
         
         return ans[n-1];
    }
};