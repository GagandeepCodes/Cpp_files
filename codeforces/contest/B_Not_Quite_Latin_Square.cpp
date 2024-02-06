#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;

void solve() {
    int t;
    cin >> t;
    while(t--) {
        char c;
        for(int i = 0; i < 3; i++) {
            unordered_map<char, bool> m;
            m['A'] = false;
            m['B'] = false;
            m['C'] = false;
            
            bool flag = false;
            for(int j = 0; j < 3; j++) {
                char b;
                cin >> b;
                if(b == '?') flag = true;
                else m[b] = true;
            }
            if(flag) {
                for(auto it = m.begin(); it != m.end(); ++it) {
                    if(it->second == false) {
                        c = it->first;
                    }
                }
            }
        }

        cout << c << endl;
    }
}

int main() {
    solve();
    return 0;
}
