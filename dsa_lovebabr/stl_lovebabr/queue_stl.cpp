#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue <string> q; // first in , first out
    q.push("gagan");
    q.push("bhardwaj");
    q.push("sharma");

    cout<<"size before pop-->"<<q.size()<<endl;
    cout<<"first elemnet--->"<<q.front()<<endl;
    q.pop();
     cout<<"first elemnet--->"<<q.front()<<endl;
     cout<<"size before pop-->"<<q.size()<<endl;


}