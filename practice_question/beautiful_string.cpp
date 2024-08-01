#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;cin>>word;
    int ans = 0;
    int i = 0;
    while (i < word.size() - 1)
    {
        if ((word[i] == word[i + 1]) || (word[i] + 1 == word[i + 1]) || (word[i] - 1 == word[i + 1]))
        {
            i++;
            ans++;
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}