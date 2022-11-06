#include<bits/stdc++.h>
using namespace std;
char* reverse(char *S, int len)
{
    //code here
    stack<int> m;
   
   for(int i =0; i < len; i++)
       m.push(S[i]);
       
   int j = 0;
   while(!m.empty())
   {
       char a = m.top();
       S[j] = a;
       j++;
       m.pop();
   }
   
   return S;
}
int main()
{
    
    return 0;
}