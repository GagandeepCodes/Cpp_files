#include <bits/stdc++.h>
using namespace std;
bool BinarySearch(vector<int> arr, int e, int s, int l)
{

    int m;
    while (s <= l)
    {
        m = s + (l - s) / 2;
        if (arr[m] == 2 * e)
            return true;
        else if (arr[m] > 2 * e)
        {
            l = m - 1;
        }
        else
            s = m + 1;
    }
    return false;
}
bool checkIfExist(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    bool result;
    for (int i = 0; i < arr.size(); i++)
    {
        int e = arr[i];
        if (e < 0)
        {
            int s = 0, l = i - 1;
            result = BinarySearch(arr, e, s, l);
            if (result)
                return true;
        }
        else
        {
            int s = i + 1, l = arr.size() - 1;
            result = BinarySearch(arr, e, s, l);
            if (result)
                return true;
        }
    }
    return false;
}


int main()
{
    return 0;
}