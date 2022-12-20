#include<bits/stdc++.h>
using namespace std;

void seive(bool prime[], int n)
{
    // set true for every number
    for(int i=2;i<=n;i++)
    {
        prime[i]=1;
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            for(int j= 2*i;j<=n;j+=i)
            {
                prime[j]=0;
            }

            cout<<i<< " is a prime number."<<endl;
        }
    }
    prime[0]=prime[1]=0;
}
int main()
{
    bool prime[1000000];
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    seive(prime,n);
}