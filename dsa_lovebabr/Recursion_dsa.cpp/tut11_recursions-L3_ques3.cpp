#include <bits/stdc++.h>
using namespace std;
// searching with simple loop
void search(int arr[],int size , int key )
{
    for (int i = 0; i < size; i++)
    {
        /* code */
        if(arr[i]==key)
        {
            cout <<"found at index : "<<i<<endl;
            break;
        }
        else if (i==4)
        {
            cout<<"not found"<<endl;
        }
    }
    
}
// searching with recursion
bool linearsearch(int arr[], int size, int key)
{
    if(size==0)
        return false;
    
    if(arr[0]==key)
        return true;
    else
    {
        return linearsearch(arr+1,size-1,key);
    }
}

// searching with recursion + binary search
bool binarySearch(int *arr, int s, int e , int k ) {

    //base case

    //element not found
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key;
    cin >> key;
    bool ans = linearsearch(arr,size,key);
    if(ans==1)
    {
        cout << "present" <<endl;
    }
    else
    {
        cout << "absent" <<endl;
    }

    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;
    return 0;
}