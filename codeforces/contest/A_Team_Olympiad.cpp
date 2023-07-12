//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    vector<ll> one;
    vector<ll> two;
    vector<ll> three;
    rep(i,0,n){
        cin>>v[i];
        if(v[i]==1) one.push_back(i+1);
        if(v[i]==2) two.push_back(i+1);
        if(v[i]==3) three.push_back(i+1);
    }
    ll ans = 0;
    ll o = one.size();
    ll tw = two.size();
    ll th = three.size();
    if(o==0 || tw==0 ||th==0){
        cout<<0<<endl;
    }
    else{
        vector<vector<ll> > final;
        for(ll i=0;i<n;i++){
            vector<ll> temp;
            temp.push_back(one[i]);
            temp.push_back(two[i]);
            temp.push_back(three[i]);
            --o;
            --tw;
            --th;
            final.push_back(temp);
            ans++;
            if(o==0 || tw==0 ||th==0){
               break;
            }
        }
        cout<<ans<<endl;
        for(ll i=0;i<final.size();i++){
            for(ll j=0;j<3;j++){
                cout<<final[i][j]<<" ";
            }cout<<endl;
        }cout<<endl;
    }
    return 0;
}