#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    pair<int,int> maxp;
    pair<int,int> minp;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(a<=mini){
            mini = a;
            minp = make_pair(mini,i);
        }
        if(a>maxi){
            maxi = a;
            maxp = make_pair(maxi,i);
        }
    }
    // cout<<maxp.first<<" "<<minp.first<<endl;
    if(maxp.second>minp.second){
        cout<<maxp.second+n-1-minp.second-1<<endl;
    }
    else{
        cout<<maxp.second+n-1-minp.second<<endl;
    }
    return 0;
}