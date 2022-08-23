#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    // Your code here
    //  int m = (l+r)/2;

    int len1 = m - l + 1;
    int len2 = r - m;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = l;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = m + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = l;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}
void mergeSort(int arr[], int l, int r)
{
    // code here
    // base case
    int mid = l + (r - l) / 2;
    if (l >= r)
    {
        return;
    }

    // int m = (l+r)/2;

    // left part sort karna h
    mergeSort(arr, l, mid);

    // right part sort karna h
    mergeSort(arr, mid + 1, r);

    // merge
    merge(arr, l, mid, r);
}
int main()
{

    return 0;
}