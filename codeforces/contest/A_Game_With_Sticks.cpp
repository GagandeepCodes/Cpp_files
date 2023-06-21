#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int x = min(m,n);
    if(x%2) cout<<"Akshat\n";
    else cout<<"Malvika\n";
    cout<<endl;
    return 0;
}