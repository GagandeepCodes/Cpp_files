//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const ll M=1e9+7; //998244353;
ll fastpow2(ll x){
    ll res = 1;
    //define the value whose power is to be calculated
    ll a = 2;
    while(x > 0){
        if(x&1){
            res = (res * a) % M;
        }
        a = (a * a) % M;
        x >>= 1;
    }
    return res;
}
ll f(ll house,vector<ll>& v){
        ll s=0,e = v.size()-1;
        while(s<=e){
            ll mid = s + (e-s)/2;
            if(v[mid] == house) return 0;
            if(v[mid] < house) s = mid+1;
            if(v[mid] > house) e = mid-1;
        }
        return min(abs(house - v[s]) , abs(house - v[e]));
    }
ll findRadius(vector<ll>& houses, vector<ll>& heaters) {
        sort(heaters.begin(),heaters.end());
        sort(houses.begin(),houses.end());
        ll ans = -1;
        for(ll i=0;i<houses.size();i++){
            if(houses[i] < heaters[0]){
                ans = max(ans,heaters[0] - houses[i]);
                continue;
            }
            if(houses[i] > heaters[heaters.size()-1]){
                ans =  max(ans,houses[i] - heaters[heaters.size()-1]);
                continue;
            }
            ans = max(ans,f(houses[i],heaters));
        }
        return ans;
    }
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll> a(n,0);
    vector<ll> b(m,0);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    ll res = findRadius(a,b);
    cout<<res<<endl;
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