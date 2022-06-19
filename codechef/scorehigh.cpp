#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define gag int
#define pie 3.141592653589
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<4;i++)
        {
            int x;
            cin>>x;
            arr.pb(x);
        }

        sort(arr.begin(),arr.end());
        cout<<arr[3]<<endl;
        
    }
}

int main() {
	// your code goes here
	solve();
	return 0;
}