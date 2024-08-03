// you are given two array. array A contains N elements and array B contains K element , you have to choose an element from 
// array A and array B and replace A[i] with A[i]^B[j] , you can do this operation any number of times , minimum the maximum absolute differnce between any two pairs of the array A.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    vector<int> B(K);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < K; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end());

    int minMaxDiff = INT_MAX;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            A[i] = A[i] ^ B[j];
            minMaxDiff = min(minMaxDiff, *max_element(A.begin(), A.end()) - *min_element(A.begin(), A.end()));
            A[i] = A[i] ^ B[j];
        }
    }

    cout << minMaxDiff << endl;

    return 0;
}