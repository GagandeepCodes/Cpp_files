//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    ll s,n;
    cin>>s>>n;
    vector<pair<ll,ll> > v;
    for(ll i=0;i<n;i++){
        pair<ll,ll> p;
        ll a,b;
        cin>>a>>b;
        p = make_pair(a,b);
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    bool flag = 1;
    if(s<v[0].first){
        flag=0;
        cout<<"NO"<<endl;
    }
    else{
        ll i=0;
        while(i<v.size()){
            if(s>v[i].first){
                s+=v[i].second;
                i++;
            }
            else{
                cout<<"NO"<<endl;
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    return 0;
}