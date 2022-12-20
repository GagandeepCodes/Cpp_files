#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (int i;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }cout<<endl;
    // d.pop_back();

    for (int i;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }cout<<endl;

    cout<<"front-->"<<d.front()<<endl;
    cout<<"back-->"<<d.back()<<endl;

    int x = d.empty();
    if(x==0)
    {
        cout<<"false"<<endl;
    }
    // d.erase(d.begin(),d.begin()+1);

    // for (int i;i<d.size();i++)
    // {
    //     cout<<d[i]<<" ";
    // }cout<<endl;
  // size becomes zero after erasing  but max size remains the same 
  
}