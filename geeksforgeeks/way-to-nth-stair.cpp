#include<bits/stdc++.h>
using namespace std;
int nthStair(int n){
		    //  Code here
		    if(n==0)
		    {
		        return 1;
		    }
		    if(n%2==0)
		    {
		        return 1+nthStair(n-1);
		    }
		    else
		    {
		        return nthStair(n-1);
		    }
		}
int main()
{
    
    return 0;
}