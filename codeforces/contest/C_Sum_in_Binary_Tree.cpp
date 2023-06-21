#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int sum = 0;
        while(n>0){
            sum+=n;
            n=n/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}