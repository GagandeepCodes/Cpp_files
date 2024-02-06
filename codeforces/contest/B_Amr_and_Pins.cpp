//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const long long M=1e9+7; //998244353;
void solve(){
    long long r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double dis = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    long long z = (long long) ceil(dis/(2*r));
    cout<<z<<endl;
    // you should actually read the stuff below

        /*
            Programming is like sex,
            you love it untill there's an error.
        */
}
int main()
{
    solve();
    return 0;
}