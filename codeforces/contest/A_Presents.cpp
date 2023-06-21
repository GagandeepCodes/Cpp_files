#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[v[i]] = i+1;
    }

    for(int i=0;i<n;i++){
        v[i] = m[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}