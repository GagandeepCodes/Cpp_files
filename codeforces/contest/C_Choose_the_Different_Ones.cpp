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
    int t;
    cin >> t;
    while (t--) {
        ll m, n, k; cin >> m >> n >> k;
        vector<ll> arr1(m);
        vector<ll> arr2(n);

        vector<ll> v1(k + 1);
        vector<ll> v2(k + 1);

        ll c1 = 0, c2 = 0;

        for (int i = 0; i < m; i++) {
            cin >> arr1[i];
            if (1 <= arr1[i] && arr1[i] <= k && v1[arr1[i]] == 0) c1++;
            if (1 <= arr1[i] && arr1[i] <= k) v1[arr1[i]]++;
        }
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
            if (1 <= arr2[i] && arr2[i] <= k && v2[arr2[i]] == 0) c2++;
            if (1 <= arr2[i] && arr2[i] <= k) v2[arr2[i]]++;
        }

        if (c1 < k / 2 || c2 < k / 2) {
            cout << "NO" << endl;
            continue;
        }
        bool flag = false;
        for (int i = 1; i <= k; i++) {
            if (v1[i] == 0 && v2[i] == 0) {
                flag = true;
                break;
            }
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

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