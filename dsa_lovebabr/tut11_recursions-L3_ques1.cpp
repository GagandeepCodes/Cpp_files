#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[],int size)
{
    if(size==0||size==1)
        return true;
        if(arr[0]>arr[1])
        {
            return false;
        }
        else
        {
            return issorted(arr+1 ,size-1);
        }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int a = issorted(arr,n);
    if(a==1)
    {
        cout <<"sorted"<<endl;
    }
    else
    {
        cout <<"not sorted" <<endl;
    }



    return 0;
}