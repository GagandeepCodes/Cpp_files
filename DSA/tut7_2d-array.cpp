#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][4];
    // for taking input
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    //for row wise output
    cout<<"for row wise output"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    // for column wise output
    cout<<"for column wise output"<<endl;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }

}