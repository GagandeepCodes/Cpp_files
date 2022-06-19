#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define gag int
#define pie 3.141592653589
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       
       for(int i=n-1;i>=0;i--)
       {
           if(arr[i]!=0)
           {
               cout<<i<<endl;
               break;
           }
       }
    }
}

int main() {
	// your code goes here
	solve();
	return 0;
}