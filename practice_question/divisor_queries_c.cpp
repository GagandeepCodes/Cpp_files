#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl "\n"
#define MOD 1000000007
#define MOD2 998244353
#define vll vector<ll>

struct SegmentTree {
    ll N;
    vll tree;
    ll neutral = 0;

    ll combine(ll a, ll b) {
        return a + b;
    }

    void build(ll u, ll L, ll R, vll &v) {
        if(L == R) {
            tree[u] = v[L];
        } else {
            ll M = (L + R) / 2;
            build(u * 2, L, M, v);
            build(u * 2 + 1, M + 1, R, v);
            tree[u] = combine(tree[u * 2], tree[u * 2 + 1]);
        }
    }

    SegmentTree(vll v) {
        N = v.size() - 1;
        tree.assign(4 * N + 1, 0);
        build(1, 1, N, v);
    }

    ll query(ll lq, ll rq, ll u, ll L, ll R) {
        if(L > rq || R < lq) {
            return neutral;
        } else if(L >= lq && R <= rq) {
            return tree[u];
        } else {
            ll M = (L + R) / 2;
            return combine(query(lq, rq, u * 2, L, M), query(lq, rq, u * 2 + 1, M + 1, R));
        }
    }

    void update(ll idx, ll val, ll u, ll L, ll R) {
        if(L > idx || R < idx) {
            return;
        } else if(L == R) {
            tree[u] = val;
            return;
        } else {
            ll M = (L + R) / 2;
            update(idx, val, u * 2, L, M);
            update(idx, val, u * 2 + 1, M + 1, R);
            tree[u] = combine(tree[u * 2], tree[u * 2 + 1]);
        }
    }
};

const int MAXN = 1e6 + 1;
vector<int> spf(MAXN);

void sieve() {
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
    for (int i = 3; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    sieve();
    int n, q; cin >> n >> q;
    vll arr(n + 1);
    for(int i = 1; i <= n; i++) cin >> arr[i];
    SegmentTree sgt(arr);
    set<int> s;
    for(int i = 1; i <= n; i++)
        s.insert(i);

    while(q--) {
        int type; cin >> type;
        int a, b; cin >> a >> b;
        if(type == 3) {
            sgt.update(a, b, 1, 1, n);
            int temp = a;
            auto it = s.lower_bound(temp);
            if(it != s.end() and s.size() != 0 and *it == a) {
                s.erase(temp);
                s.insert(a);
            } else {
                s.insert(a);
            }
            arr[a] = b;
        } else if (type == 2) {
            cout << sgt.query(a, b, 1, 1, n) << endl;
        } else {
            while(a <= b) {
                int temp = a;
                auto it = s.lower_bound(temp);
                if(it == s.end()) break;
                if(*it > b) break;
                int c = *it + 1;
                sgt.update(a, arr[a] / spf[arr[a]], 1, 1, n);
                if(spf[a] == 1) {
                    s.erase(temp);
                } 
                arr[a] = spf[a];
                a = c;
            }
        }
    }
    return 0;
}