#include <iostream>
#include <vector>
#include<bits/stdc++.h> 

using namespace std;

class SegmentTree {
private:
    vector<int> tree;
    vector<int> data;
    vector<int> smallest_prime_factor;
    int n;

    void buildTree(int node, int start, int end) {
        if (start == end) {
            tree[node] = data[start];
        } else {
            int mid = (start + end) / 2;
            buildTree(2 * node, start, mid);
            buildTree(2 * node + 1, mid + 1, end);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    void updateTree(int node, int start, int end, int idx, int val) {
        if (start == end) {
            data[idx] = val;
            tree[node] = val;
        } else {
            int mid = (start + end) / 2;
            if (start <= idx && idx <= mid) {
                updateTree(2 * node, start, mid, idx, val);
            } else {
                updateTree(2 * node + 1, mid + 1, end, idx, val);
            }
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }

    int queryTree(int node, int start, int end, int L, int R) {
        if (R < start || end < L) {
            return 0;
        }
        if (L <= start && end <= R) {
            return tree[node];
        }
        int mid = (start + end) / 2;
        int leftSum = queryTree(2 * node, start, mid, L, R);
        int rightSum = queryTree(2 * node + 1, mid + 1, end, L, R);
        return leftSum + rightSum;
    }

    void rangeUpdateTree(int node, int start, int end, int L, int R) {
        if (start > end || start > R || end < L) {
            return;
        }
        if (start == end) {
            data[start] /= smallest_prime_factor[data[start]];
            tree[node] = data[start];
            return;
        }
        int mid = (start + end) / 2;
        rangeUpdateTree(2 * node, start, mid, L, R);
        rangeUpdateTree(2 * node + 1, mid + 1, end, L, R);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    void computeSmallestPrimeFactors(int max_val) {
        smallest_prime_factor.resize(max_val + 1);
        for (int i = 2; i <= max_val; ++i) {
            smallest_prime_factor[i] = i;
        }
        for (int i = 2; i * i <= max_val; ++i) {
            if (smallest_prime_factor[i] == i) {
                for (int j = i * i; j <= max_val; j += i) {
                    if (smallest_prime_factor[j] == j) {
                        smallest_prime_factor[j] = i;
                    }
                }
            }
        }
    }

public:
    SegmentTree(const vector<int>& input) {
        n = input.size();
        data = input;
        tree.resize(4 * n);
        int max_val = *max_element(input.begin(), input.end());
        computeSmallestPrimeFactors(max_val);
        buildTree(1, 0, n - 1);
    }

    void update(int idx, int val) {
        updateTree(1, 0, n - 1, idx, val);
    }

    int query(int L, int R) {
        return queryTree(1, 0, n - 1, L, R);
    }

    void rangeUpdate(int L, int R) {
        rangeUpdateTree(1, 0, n - 1, L, R);
    }
};

vector<int> generate_primes(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    vector<int> primes;
    for (int p = 2; p <= n; ++p) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}

int main(){
    int N,Q;
    cin>>N>>Q;

    vector<int> v(N);

    long long int k=1;
    for(int i=0;i<N;i++) 
    {
        cin>>v[i];
    }

    SegmentTree st(v);

    vector<int> prime=generate_primes(k);

    for(int i=0;i<Q;i++){

        int o,l,r;
        cin>>o>>l>>r;

        if(o==1){
            st.rangeUpdate(l-1,r-1);
        }
        else if(o==2){
            cout<<st.query(l-1,r-1);
        }   
        else{
            st.update(l-1,r);
        }
    }

return 0;
}