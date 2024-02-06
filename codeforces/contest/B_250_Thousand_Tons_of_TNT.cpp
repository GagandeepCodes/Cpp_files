//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans = -1;
        for (int i=1;i<=n;i++) {
            if (n%i==0) {
                vector<long long>temp;
                for (int j=0;j<n;j+=i) {
                    long long d = 0;
                    for (int k=0;k<i;k++) {
                        d+=v[j+k];
                    }
                    temp.push_back(d);
                }
                long long a = *min_element(temp.begin(), temp.end());
                long long res = *max_element(temp.begin(), temp.end()) - a;
                ans = max(ans, res);
            }
        }
        cout << ans << endl;
    }
}
int main()
{
    solve();
    return 0;
}