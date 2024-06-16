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
void solve(){
    ll t;cin>>t;
    while(t--){
        ll a;cin>>a;
        string str = "aaa";
        ll ans = 3;
        string f = "";
        bool flag = false;
        for(char x='a';x<='z';x++){
            for(char y ='a';y<='z';y++){
                for(char z='a';z<='z';z++){
                    ll sum = x-'a'+1 + y-'a'+1 + z-'a'+1;
                    if( sum == a ){
                        str = string(1,x) + string(1,y) + string(1,z);
                        if(flag==false) f=str;
                        f = min(f,str);
                        flag = true;
                        ans = sum;
                    }
                }
            }
        }
        cout<<f<<endl;
    }
    // you should actually read the stuff below

        /*
            Programming is like sex,
            you love it untill there's an error.
        */
}
int  main()
{
    solve();
    return 0;
}