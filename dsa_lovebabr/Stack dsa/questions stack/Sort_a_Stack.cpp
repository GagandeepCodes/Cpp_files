#include<bits/stdc++.h>
using namespace std;
void SortedStack :: sort()
{
    //Your code here
    stack<int> s_new;
    stack<int> third;
   while(!s.empty()){
       int temp = s.top();
       s.pop();
       
       while(!s_new.empty() && s_new.top()>temp){
            int x = s_new.top();
            s_new.pop();
            s.push(x);
       }
       s_new.push(temp);
   }
   while(!s_new.empty()){
       int y = s_new.top();
       s_new.pop();
       third.push(y);
   }
   while(!third.empty()){
       int y = third.top();
       third.pop();
       s.push(y);
   }
}
int main()
{
    return 0;
}