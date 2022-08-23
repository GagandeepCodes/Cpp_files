#include<bits/stdc++.h>
using namespace std;
vector<int> fact(int n){
   
   // Complete the function

 int i, power=0;
  double fact = 1;
    for(i = 1; i <= n ; i++)
    {
        fact = fact * i;
        while(int(fact)>9)
        {
            power++;
            fact = fact / 10;
        }
        
    }
    vector<int> v;
        v.push_back(fact);
        v.push_back(power);
        return v;
}

int main()
{
    
    return 0;
}
 