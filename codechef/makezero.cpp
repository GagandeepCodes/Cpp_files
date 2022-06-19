#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define gag int
#define pie 3.141592653589
using namespace std;

gag countones(int n)  // 2 10 8 1010   0010   1000    1010  
{
           
    gag dectobinary[32];  // 1010 && 0001  === 0000-- even ***** 0011 & 0001 - 0001- odd
 
    
    gag i = 0;
    while (n > 0) {
 
        dectobinary[i] = n % 2;
        n = n / 2;
        i++;
    }
    gag cnt = 0;
    
    for (gag j = i - 1; j >= 0; j--){
        if(dectobinary[j]==1)
        {
            cnt++;
        }
    }
    
    return cnt;
}

void solve()
{
    gag t;
    cin>>t;
    while(t--)
    {
        gag l;
        cin>>l;
        gag arr[l];
        gag number = 0;
        for(gag i =0;i<l;i++)
        {
            cin>>arr[i];
            number = number|arr[i];
        }

        
        cout<<countones(number)<<endl;
    }
}

int main() {
	// your code goes here
	solve();
	return 0;
}
