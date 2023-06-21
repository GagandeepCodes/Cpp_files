#include<bits/stdc++.h>
using namespace std;

int main()
{
     pair<int,int> p;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int a;
            cin>>a;
            if(a==1){
                p = make_pair(i,j);
            }
        }
    }
    cout<<abs(p.first-2)+abs(p.second-2)<<endl;
    return 0;
}