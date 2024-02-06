//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
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
    string s;cin>>s;
    ll cnt=0;ll n = s.size();bool flag = false;
    unordered_map<char,int> m;
    for(int i=0;i<n;i++) m[s[i]]++;
    unordered_map<char,int> :: iterator it = m.begin();
    while(it!=m.end()){
        if(it->second%2  == 1){
            cnt++;
        }
        ++it;
    }
    string c = "";
    if(n%2==1 && cnt==1){
        string s1,s2;
        unordered_map<char,int> :: iterator it = m.begin();
        while(it!=m.end()){
            ll a  = it->second;
            while(a>0){
                if(a>=2){
                    s1.push_back(it->first);
                    s2.push_back(it->first);
                    a-=2;
                }
                else if(a==1){
                    c.push_back(it->first);
                    a--;
                }
            }
            ++it;
        }
        s2+=c;
        reverse(s2.begin(),s2.end());
        s1+=s2;
        cout<<s1<<endl;
    }
    else if(n%2==0 && cnt==0){
        string s1,s2;
        unordered_map<char,int> :: iterator it = m.begin();
        while(it!=m.end()){
            ll a  = it->second;
            while(a>0){
                s1.push_back(it->first);
                s2.push_back(it->first);
                a-=2;
            }
            ++it;
        }
        reverse(s2.begin(),s2.end());
        s1+=s2;
        cout<<s1<<endl;
    }
    else {
        cout<<"NO SOLUTION"<<endl;
    }

    // else{
    //     cout<<"NO SOLUTION"<<endl;
    // }
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