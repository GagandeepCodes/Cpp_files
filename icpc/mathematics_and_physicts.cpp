#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 105;
const int MAXQ = 10005;
const int MOD = 1000000007;

int N, Q;
int math[MAXN][MAXN], phys[MAXN][MAXN];
int dp[MAXN][MAXN][2];

int main() {
    cin >> N >> Q;

    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            math[i][1] = 1;
        } else if (x == 2) {
            phys[i][1] = 1;
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 2; j <= N; j++) {
            int x;
            cin >> x;

            math[i][j] = math[i-1][j] + (x == 1 ? 1 : 0);
            phys[i][j] = phys[i-1][j] + (x == 2 ? 1 : 0);
        }
    }

    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= N; i++) {
        dp[i][1][0] = math[i][1];
        dp[i][1][1] = phys[i][1];
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 2; j <= N; j++) {
            for (int k = 1; k <= i-1; k++) {
                dp[i][j][0] = (dp[i][j][0] + dp[k][j-1][0] * (math[i][j] - math[k][j-1])) % MOD;
                dp[i][j][1] = (dp[i][j][1] + dp[k][j-1][1] * (phys[i][j] - phys[k][j-1])) % MOD;
            }
            for (int q = 0; q < Q; q++) {
                int type, L, R;
                cin >> type >> L >> R;

                if (type == 1 && math[R][j] - math[L-1][j] == j) {
                    dp[R][j][0] = (dp[R][j][0] - dp[L-1][j][1] + MOD) % MOD;
                    dp[R][j][1] = (dp[R][j][1] - dp[L-1][j][0] + MOD) % MOD;
                } else if (type == 2 && math[R][j] - math[L-1][j] >= 1 && phys[R][j] - phys[L-1][j] >= 1) {
                    // do nothing
                } else {
                    dp[R][j][0] = dp[R][j][1] = 0;
                }
            }
        }
    }

    int ans = 0;
    for (int j = 2; j <= N; j++) {
        ans = (ans + dp[N][j][0] + dp[N][j][1]) % MOD;
    }
    cout << ans << endl;

    return 0;
}
