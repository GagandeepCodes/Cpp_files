#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>pbds;
// less_equal for multiset and less for set

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int> > v;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            pair<int,int> p = make_pair(a,b);
            v.push_back(p);      
        }
        sort(v.begin(),v.end());
        set<int> temp;
        vector<int> v1;
        for(int i=0;i<n;i++){
            temp.insert(v[i].second);
            v1.push_back(v[i].second);
        }
        // sort(v1.begin(),v1.end());
        long long ans = 0;
        for(int i=0;i<n;i++){
            set<int>::iterator it = temp.find(v1[i]);
            int cnt = distance(temp.begin(), it);
            ans += cnt;
            temp.erase(it);
        }
        cout<<ans<<endl;
    }
}

int main(){
    solve();
    return 0;
}
