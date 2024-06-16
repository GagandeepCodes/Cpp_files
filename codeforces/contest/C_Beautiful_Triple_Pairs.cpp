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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<vector<int> > v(n-2,vector<int>(3,0));
        map<vector<int>,int> m1;
        map<vector<int>,int> m2;
        map<vector<int>,int> m3;
        for(int i=0;i<n-2;i++){
            v[i][0] = a[i];
            v[i][1] = a[i+1];
            v[i][2] = a[i+2];
        }
        // for(int i=0;i<v.size();i++){
        //     for(int j=0;j<v[i].size();j++){
        //         cout<<v[i][j]<<" ";
        //     }cout<<endl;
        // }
        for(int i=0;i<v.size();i++){
            vector<int> c(2,0);
            c.push_back(v[i][0]);
            c.push_back(v[i][1]);
            m1[c]++;
            c.clear();
            c.push_back(v[i][1]);
            c.push_back(v[i][2]);
            m2[c]++;
            c.clear();
            c.push_back(v[i][0]);
            c.push_back(v[i][2]);
            m3[c]++;
        }
        // map<vector<int>,int>::iterator q = m1.begin();
        // while(q!=m1.end()){
        //     cout<<q->first[0]<<" "<<q->first[1]<<" "<<q->second<<endl;
        //     q++;
        // }cout<<endl;
        // map<vector<int>,int>::iterator q1 = m2.begin();
        // while(q1!=m2.end()){
        //     cout<<q1->first[0]<<" "<<q1->first[1]<<" "<<q1->second<<endl;
        //     q1++;
        // }cout<<endl;
        // map<vector<int>,int>::iterator q2 = m3.begin();
        // while(q2!=m3.end()){
        //     cout<<q2->first[0]<<" "<<q2->first[1]<<" "<<q2->second<<endl;
        //     q2++;
        // }cout<<endl;
        int ans = 0;
        map<vector<int>,int>::iterator it = m1.begin();
        map<vector<int>,int>::iterator it1 = m2.begin();
        map<vector<int>,int>::iterator it2 = m3.begin();
        while(it!=m1.end() && it1!=m2.end() && it2!=m3.end()){
            vector<int> c(3,0);
            c[0] = it->second;
            c[1] = it1->second;
            c[2] = it2->second;
            sort(c.begin(),c.end());
            for(int i=0;i<3;i++){
                cout<<c[i]<<" ";
            }cout<<endl;
            if(c[0]==1 && c[1]==1 && c[0]==2){
                ans++;
            }
            it++;
            it1++;
            it2++;
        }
        cout<<ans<<endl;

    }
}
int main()
{
    solve();
    return 0;
}