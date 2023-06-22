//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    //5 7 10 10 12 22
    int j=n-1;
    int mini = INT_MAX;
    for(int i=0;i<m-n+1;i++){
        mini = min(mini,v[j]-v[i]);
        j++;
    }
    cout<<mini<<endl;
    return 0;
}