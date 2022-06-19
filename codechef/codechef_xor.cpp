#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==2)
        {
            cout<<-1;
        }
        else if(a%2!=0)
        {
            for(int j=1;j<=a;j++)
            {
                cout<<j<<" ";
            }
        }
        else
        {
            cout<<"2 3 1 4 ";
            for(int j=5;j<=a;j++)
            {
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
