#include<bits/stdc++.h>
using namespace std;
long long int binarysearch(long long int n,int s,int e,long long int ans)
    {
        // int ans = -1;
        long long int m = s+(e-s)/2; // s= 4,e=3,mid=2
        long long int sum = (m*(m+1)*(2*m+1))/6; // 1 4 9 16 25
        if(s>e)
        {
            return ans;  
        }
        if(sum<=n)
        {
            // return m;
            ans = m; 
            // s = m + 1;
            return binarysearch(n,m+1,e,ans);
        }
        else
        {
            // e = m-1;
            return binarysearch(n,s,m-1,ans); 
        }
        
       return ans; 
    }
    long long int killinSpree(long long int n)
    {
        // Code Here
        // long long int sum = (n*(n+1)*(2*n+1))/6;
        
        // int s = 1,e = sqrt(n);
        long long int ans = -1;
        return binarysearch(n,1,sqrt(n),ans);
        // return e;
    }
int main()
{
    
    return 0;
}