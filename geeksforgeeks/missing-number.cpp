#include<bits/stdc++.h>
using namespace std;
int MissingNo(vector<int> arr, int n) {
  int x1 = arr[0];
  int x2 = 1;

  for (int i = 1; i < n; i++)
    x1 = x1 ^ arr[i];

  for (int i = 2; i <= n + 1; i++)
    x2 = x2 ^ i;

  return (x1 ^ x2);
}
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        return MissingNo(array,n-1);
    }

int main()
{

    return 0;
}