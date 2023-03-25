#include <iostream>
#include <vector>
using namespace std;
int N;
int A[100005];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int operations = 0;
    for (int i = 2; i <= N; i++) {
        if (A[i] <= A[i-1]) {
            int j = i-2;
            while (j >= 1 && A[j+1] <= A[j]) {
                j--;
            }
            j++;

            int target = A[i-1] ^ A[i];
            for (int k = i-1; k >= j+1; k--) {
                if ((target ^ A[k]) < A[k]) {
                    operations += (i-k);
                    A[k] ^= target;
                    target = A[k] ^ target;
                } else {
                    operations += (i-k-1);
                    A[k+1] ^= target;
                    target = A[k+1] ^ target;
                }
            }

            if (target != 0) {
                operations += (i-j);
                A[j] ^= target;
            }
        }

        if (operations > 4*N) {
            cout << "-1\n";
            return 0;
        }
    }

    cout << operations << "\n";
    return 0;
}
