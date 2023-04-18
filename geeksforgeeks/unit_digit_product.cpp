#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    long long int powerOptimised(int a,int b){
        long long int ans = 1;
        if(b%4==0){
            for(int i=0;i<4;i++){
            ans*=a;
            ans = ans%10;
            }
        }
        else
        {
           int x = b%4;
            for(int i=0;i<x;i++){
            ans*=a;
            ans = ans%10;
            }
        }
        return ans;
}
    int theLastDigit(int a, int b, int c, int d, int e, int f){
        // code here
        long long int first = powerOptimised(a,b);
        long long int second = powerOptimised(c,d);
        long long int third = powerOptimised(e,f);
        // cout<<first<<endl;
        long long int ans = first*second*third;
        return ans%10;
    }
};
int main()
{
    
    return 0;
}