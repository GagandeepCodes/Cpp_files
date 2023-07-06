//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int sum = 0;
    int x  = n*a;
    while(n-m>=0){
        n-=m;
        sum+=b;
    }
    if(n*a<b){
        sum+=n*a;
    }
    else{
        while(n>0){
            n-=m;
            sum+=b;
        }
    }
    if(x<sum){
        cout<<x<<endl;
    }
    else cout<<sum<<endl;
    return 0;
}