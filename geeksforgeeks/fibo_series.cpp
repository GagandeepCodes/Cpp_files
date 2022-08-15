#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    //base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    //cout<<fibo(n)<<endl;
    return (fibo(n - 1) + fibo(n - 2));
}

int main()
{
    int n = 5;
    cout<<fibo(n)<<endl;
    // cout<<fibo(n+1)<<endl;
    // cout<<fibo(n+2)<<endl;
    // cout<<fibo(n+3)<<endl;
    // cout<<fibo(n+4)<<endl;
    // cout<<fibo(n+5)<<endl;
    return 0;
}