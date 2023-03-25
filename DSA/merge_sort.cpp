#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
         // Your code here
         int i=l;
         int j =mid+1;
         int k=l;
         int b[r+1];
         while(i<=mid && j<=r){
             if(arr[i]<=arr[j]){
                 b[k] = arr[i];
                 i++;
                 k++;
             }
             else
             {
                b[k] = arr[j];
                j++;
                k++;
             }
         }
         if(i>mid){
             while(j<=r){
                 b[k] = arr[j];
                 k++;
                 j++;
             }
         }
         else
         {
             while(i<=mid){
                 b[k] =arr[i];
                 i++;
                 k++;
             }
         }
         for(k=l;k<=r;k++){
             arr[k] = b[k];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r){
            int mid = (l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};
int main()
{
    
    return 0;
}