#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = { 7, 1, 10, 5, 4, 9 };
    bubbleSort(arr, 6);
    for ( int i=0;i<6;i++)
    {
        cout << arr[i] << " ";
    }
}