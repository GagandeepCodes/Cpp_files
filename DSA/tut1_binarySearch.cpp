#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size ,int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + ( end - start ) /2 ;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if ( key > arr[mid])
        {
            start = mid + 1; 
        }
        else if( key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + ( end - start )  /2 ;
    }
    return -1;
}
int main()
{
    int even[] = {2,4,6,8,10};
    int odd[] = {3,5,7,9,11};
    int index = binarySearch(even , 5 , 8);
    cout << " \n the index of 8 in the array is : " << index <<endl;
    return 0;
}