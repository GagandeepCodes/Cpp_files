#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for ( int i=0;i<n;i++)
    {
        int minindex = i;
        
        for (int j = i+1 ; j<n;j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
int main()
{
    int arr[] = { 7, 1, 10, 5, 4, 9 };
    
    selectionSort(arr, 6);
    for ( int i=0;i<6;i++)
    {
        cout << arr[i] << " ";
    }
}