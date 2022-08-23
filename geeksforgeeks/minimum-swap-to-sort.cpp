#include<bits/stdc++.h>
using namespace std;
int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int ans=0 ;
	    int n=nums.size() ;
	    
	    vector<pair<int,int> > v ;
	    for(int i=0 ; i<n ; i++)
	        v.push_back({nums[i],i}) ;
	    sort(v.begin(),v.end()) ;
	    for(int i=0 ; i<n ; i++)
	    {
	        if(v[i].second==i)
	            continue;
	        else{
	            ans++ ;
	            swap(v[i],v[v[i].second]) ;
	            i-- ;
	        }
	    }
	    
	    return ans ;
	}
int main()
{
    
    return 0;
}