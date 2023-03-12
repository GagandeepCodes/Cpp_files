#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    	long long prod_left = INT_MIN;
    	long long prod_right = INT_MIN;
    	long long max_prod = INT_MAX;
    	sort(arr,arr+n);
    	 prod_left = arr[0]*arr[1]*arr[n-1];
    	 prod_right = arr[n-1]*arr[n-2]*arr[n-3];
    	return max(prod_left,prod_right);
    }
};
int main()
{
    
    return 0;
}