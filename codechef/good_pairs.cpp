#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr1[n];
        int arr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        map<pair<int,int>, int> map1;
        long long int count = 0;
        int i=0;
        while(i<n)
        {
            count = count + map1[{arr1[i],arr2[i]}];
            map1[{arr2[i],arr1[i]}]++;
            i++;
        }
        cout << count <<endl;

    }
    
}

int main() {
	// your code goes here
	solve();
	return 0;
}