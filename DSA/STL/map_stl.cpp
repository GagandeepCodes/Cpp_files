#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]= "gagan";
    m[13]= "bhardwaj";
    m[2]= "sharma";

    cout<<"before erase"<<endl;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout <<"find 13-->"<<m.count(13)<<endl;

    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

}