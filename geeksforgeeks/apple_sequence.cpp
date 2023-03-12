#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    int appleSequences(int n, int m, string s){
        // code here 
        int cnt=0;
        int st=0;
        int end=0;
        int maxi=0;
        while(end<n){
            if(s[end]=='O'){
                cnt++;
            }
            while(st<n && cnt>m){
                if(s[st]=='O'){
                    cnt--;
                }
                st++;
            }
            maxi = max(end-st+1,maxi);
            end++;
        }
        return maxi;
    }
};
int main()
{
    
    return 0;
}