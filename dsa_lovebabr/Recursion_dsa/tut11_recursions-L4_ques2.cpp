#include<bits/stdc++.h>
using namespace std;
void palindrome( string str , int i , int j)
{
    if (i>j)
    {
        cout<<"yes palindrome"<<endl;
        return ;
    } 
    if(str[i]!=str[j])
    {
        cout<<"not palindrome"<<endl;
    }
    else
    {
        i++;
        j--;
        palindrome(str,i,j);
    }

}
int main()
{
    string str;
    cin>>str;
    palindrome(str,0,str.length()-1);



    return 0;
}