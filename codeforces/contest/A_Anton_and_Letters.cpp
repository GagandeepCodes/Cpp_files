//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    set<char> s;
    while(cin>>ch){
        if(ch>='a' && ch<='z'){
            s.insert(ch);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}