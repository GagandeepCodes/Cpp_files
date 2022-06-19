#include<bits/stdc++.h>
using namespace std;
// JAI SHREE RAM
int sum(int arr[], int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    else
    {
        int ans = arr[0] + sum(arr+1,size-1);
        return ans;
    }
}
int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout<<sum(arr,n)<<endl;

    return 0;
}