#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n,A,B,C;
    cin>>n>>A>>B>>C;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        if (i >= A && dp[i - A]!=-1) {
            dp[i] = max(dp[i], dp[i - A] + 1);
        }
        if (i >= B && dp[i - B]!=-1) {
            dp[i] = max(dp[i], dp[i - B] + 1);
        }
        if (i >= C && dp[i - C]!=-1) {
            dp[i] = max(dp[i], dp[i - C] + 1);
        }
    }
    return dp[n];
}