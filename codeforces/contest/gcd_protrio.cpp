//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const ll M=1e9+7; //998244353;
ll gcd(ll a,ll b) {
   ll temp;
   while(b > 0) {
      temp = b;
      b = a % b;
      a = temp;
   }
   return a;
}
multiset<ll> pf(ll n) 
{ 
    multiset<ll> ans;
    while (n % 2 == 0) 
    {
        ans.insert(2); 
        n = n/2;
    } 
    for(ll i = 3; i <= sqrt(n); i = i + 2) 
    {
        while (n % i == 0) 
        { 
            ans.insert(i);
             n = n/i;
        } 
    }
     if (n > 2){
        ans.insert(n);
     }
     return ans; 
} 
void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n,0);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll res = v[0];
        bool flag = false;
        for(ll i=1;i<n;i++){
            res = gcd(v[i],res);
            if(res==1){
                flag = true;
                break;
            }
        }
        multiset<ll> num = pf(res);
        set<ll>::iterator itr;
        // cout<<"GCD : "<<res<<endl;
        if(flag || num.size()==1){
            cout<<"DRAW"<<endl;
        }
        else if(num.size()>=2){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
}
int main()
{
    solve();
    return 0;
}