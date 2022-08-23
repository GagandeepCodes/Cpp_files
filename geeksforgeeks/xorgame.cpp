#include<bits/stdc++.h>
using namespace std;
int xorCal(int k){
        // code here
        if(k%2==0)
        {
            return -1;
        }
        if(k==1)
        {
            return 2;
        }
            for(int i=1;i<k;i++)
            {
                if((i^(i+1))==k)
                {
                    return i;
                }
            }
        
        return -1;
    }
int main()
{
    
    return 0;
}