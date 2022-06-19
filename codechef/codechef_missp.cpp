#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count = 0;
	    while(n--)
	    {
	        int a;
	        cin>>a;
	        count ^=a;
	    }
	    cout << count <<endl;
	}
	return 0;
}