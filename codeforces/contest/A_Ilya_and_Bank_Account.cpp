//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    if(n>=0) cout<<n<<endl;
    else{
        int a = n/10;
        int b = n/100*10 + n%10;
        int ans  = max(a,b);
        cout<<ans<<endl;
    }
    return 0;
}