#include <bits/stdc++.h>
using namespace std;
int firstocc(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int lastocc(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int even[7] = {1, 2, 3, 3, 3 ,3 , 5};
    int firstindex = firstocc(even, 7, 3);
    cout << "\n the first occurance of 3 is at index : " << firstindex << " \n " << endl;
    int lastindex = lastocc(even, 7, 3);
    cout << "\n the last occurance of 3 is at index : " << lastindex << " \n " << endl;
    cout << " \n" << " the total occurance of 3 is : " << (lastindex - firstindex + 1) << "\n" << endl;

    return 0;
}