#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char> ch;
        stack<int> it;
        int len = 0;
        int maxi = 0;
        it.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                it.push(i);
            }
            else{
                it.pop();
                if(it.empty()){
                    it.push(i);
                }
                else{
                    len = i - it.top();
                }
            }
            maxi = max(len,maxi);
        }
        return maxi;
    }
};
int main()
{
    
    return 0;
}