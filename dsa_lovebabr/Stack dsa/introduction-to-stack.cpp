#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else
    cout<<"stack is not empty"<<endl;
    return 0;
}