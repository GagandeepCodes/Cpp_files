#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <string> s; //first in ,last out 
    s.push("gagan");
    s.push("bhardwaj");
    s.push("sharma");

    cout<<"top element-->"<<s.top()<<endl;

    s.pop();
    cout<<"top element-->"<<s.top()<<endl;

    cout<<"size of stack-->"<<s.size()<<endl;
}