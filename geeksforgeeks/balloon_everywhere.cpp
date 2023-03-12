#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxInstance(string s){
        map<char,int> m;
        for(int i=0;i<26;i++){
            m[char(97+i)]=0;
        }
        // a->0 , b->1, l->11 ,o->14,n->13
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        return min(m['a'],min(m['b'],min(m['l']/2,min(m['o']/2,m['n']))));
        // return 0;
        
    }
};

//approach -2
// class Solution{
// public:
//     int maxInstance(string s){
//         map<int,int> m;
//         for(int i=0;i<s.size();i++){
//             m[ s[i] - 'a']++;
//         }
//         // return 0;
        
//         return min(m[0],min(m[1],min(m[11]/2,min(m[14]/2,m[13]))));
//     }
// };
int main()
{
    
    return 0;
}