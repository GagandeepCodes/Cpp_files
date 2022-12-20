#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    cout<<"capacity-->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity-->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity-->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity-->"<<v.capacity()<<endl;

    cout<<"size of vector-->"<<v.size()<<endl;

    cout<<"front-->"<<v.front()<<endl;
    cout<<"back-->"<<v.back()<<endl;

    cout <<"before popping"<<endl;
    for(int i;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();

    cout<<"after popping"<<endl;
    for(int i;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}