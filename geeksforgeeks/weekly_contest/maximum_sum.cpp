#include<bits/stdc++.h>

using namespace std;

int max_sum_array(vector<int>& A) {
    int n = A.size();
    vector<int> B(n);
    for (int i = 0; i < n; i++) {
        B[i] = (i+1)*A[i];
    }
    sort(A.begin(), A.end(), greater<int>());
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < n-1; i++) {
            if (B[i] < B[i+1]) {
                swap(B[i], B[i+1]);
                swap(A[i], A[i+1]);
                swapped = true;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += B[i];
    }
    return sum;
}