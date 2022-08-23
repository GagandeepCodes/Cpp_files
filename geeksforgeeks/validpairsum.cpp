#include<bits/stdc++.h>
using namespace std;
long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	long long counter =0;
    	 
    	 sort(a,a+n);
    	 
    	 
    	 int s =0 , e = n-1;
    	 
    	 
    	  while(s<e){
    	      if(a[s]+a[e]<=0){
    	          s++;
    	      }
    	      else{
    	          counter+=(e-s);
    	          e--;
    	      }
    	  }
    	  
    	  return counter;
    }   
int main()
{
    
    return 0;
}