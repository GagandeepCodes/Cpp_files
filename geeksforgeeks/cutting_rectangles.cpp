#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int gcd(long long int a, long long int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a,b-a);
}
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        // code here
        long long int k = gcd(L,B);
        vector<long long int> ans;
        long long int N = (L/k) * (B/k);
        ans.push_back(N);
        ans.push_back(k);
        return ans;
    }
};
int main()
{
    
    return 0;
}