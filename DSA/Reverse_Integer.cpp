#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long r = 0;
        while(x){
            r=r*10+x%10;
            x/=10;
        }
        if(r<INT_MIN || r>INT_MAX) return 0;
        return (int)r;
    }
};
int main()
{
    
    return 0;
}