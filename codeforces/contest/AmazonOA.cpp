//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
vector<vector<int> > f(vector<int> v, int n){
    vector<vector<int> > ans;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[v[i]] = i;
    }
     
}
int main()
{
    vector<int> v = {31,25,85,29,35};
    vector<vector<int> > ans = f(v,v.size());
    return 0;
}