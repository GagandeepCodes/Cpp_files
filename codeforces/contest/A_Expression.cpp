//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(3);
    cin>>v[0]>>v[1]>>v[2];
    int ans = v[0]+v[1]+v[2];
    ans = max(ans,(v[0]+v[1])*v[2]);
    ans = max(ans,v[0]*(v[1]+v[2]));
    ans = max(ans,v[0]*v[1]*v[2]);
    ans = max(ans,v[0]+(v[1]*v[2]));
    cout<<ans<<endl;
    return 0;
}