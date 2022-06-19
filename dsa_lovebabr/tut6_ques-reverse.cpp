#include<bits/stdc++.h>
using namespace std;
void reversestring(vector <char> &s)
{
    int st = 0;
    int e = s.size()-1;
    while(st<e)
    {
        swap(s[st++],s[e--]);
    }
}
int main()
{
    vector<char> str;
    str.push_back('a');
    str.push_back('b');
    str.push_back('c');
    str.push_back('d');
    
    reversestring(str);
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
}