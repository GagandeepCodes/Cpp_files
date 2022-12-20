#include<bits/stdc++.h>
using namespace std;
int main()
{
    // complexities of erase , find , count , insert is O(LOG(N))
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(1);
    // for(auto i :s) // error due to c++11 extenstion
    // {
    //     cout<<i<<endl;
    // }cout<<endl;

    set <int>:: iterator it = s.begin();
    it++;

    s.erase(it);

    // for(auto i: s)
    // {
    //     cout<<i<<endl;
    // }cout<<endl;
    cout<<"5 is present or not --> "<<s.count(5)<<endl;
    cout<<"-5 is present or not --> "<<s.count(-5)<<endl;
    set<int>:: iterator itr = s.find(5);

    // for(auto it=itr;it!=s.end();it++)
    // {
    //     cout<<* it<<" ";
    // }cout<<endl;

}