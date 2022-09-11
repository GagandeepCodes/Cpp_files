#include <bits/stdc++.h>
using namespace std;
int longestUniqueSubsttr(string S)
{
    // code
    unordered_map<char, int> m;
    int i = 0;
    int j = 0;
    int maxi = -1;
    int n = S.length();
    for (int j = 0; j < n; j++)
    {
        m[S[j]]++;
        while (i <= j && m[S[j]] > 1)
        {
            m[S[i]]--;
            i++;
        }
        maxi = max(maxi, j - i + 1);
    }
    return maxi;
}
int main()
{

    return 0;
}