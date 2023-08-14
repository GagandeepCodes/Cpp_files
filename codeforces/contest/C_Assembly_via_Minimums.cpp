//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = n*(n-1);
        x=x>>1;
        vector<int> v(x,0);
        int maxi = INT_MIN;
        map<int,int> m;
        for(int i=0;i<x;i++){
            cin>>v[i];
            m[v[i]]++;
            if(v[i]>maxi){
                maxi = v[i];
            }
        }
        vector<int> temp;
        map<int, int>::iterator it = m.begin();
        while(it!=m.end()){
            temp.push_back(it->first);
            ++it;
        }
        int size = temp.size();
        vector<int> ans;
        int factor = n-1;
        for(int i=0;i<size;i++){
            int cnt = m[temp[i]];
            while(cnt>0){
                cnt-=factor;
                factor--;
                ans.push_back(temp[i]);
            }
        }
        int left = n - ans.size();
        for(int i=0;i<left;i++){
            ans.push_back(maxi);
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
    return 0;
}