#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int a[], int l, int h)
    {
        // code here
        if(l<h){
            int pivot = partition(a,l,h);
            quickSort(a,l,pivot-1);
            quickSort(a,pivot+1,h);
        }
    }
    
    public:
    int partition (int a[], int l, int h)
    {
       // Your code here
       int pivot = a[l]; 
       int i = l;
       int j = h;
       while(i<j){
           while(i<=h-1 && a[i]<=pivot) i++;
           while(a[j]>pivot && j>=l) j--;
           if(i<j){
               swap(a[i],a[j]);
           }
       }
       swap(a[l],a[j]);
       return j;
    }
};
int main()
{
    
    return 0;
}