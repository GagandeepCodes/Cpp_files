// code aisa likho ki,
// 4 log debug krne se dare
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, b) for (ll i = a; i < b; i++)
const int M = 1e9 + 7; // 998244353;

/**
     Programming is like sex,
        you love it untill you make a mistake.
                -Gagandeep Bhardwaj
*/
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        string res = "";
        int carry = 0;
        bool flag = false;
        stack<int> s;
        int i = n.size() - 1;

        for (int i = n.size() - 1; i >= 0; i--)
        {
            int num = n[i] - '0' + carry;
            if (num == 0)
                s.push(-1);
            else if (num >= 5)
            {
                s.push(0);
                carry = 1;
                flag=true;
            }
            else
            {
                s.push(num);
                carry = 0;
                flag = false;
            }
        }

        if(flag==true || carry==1){
            s.push(1);
        }

        bool flag_yes = false;
        while (s.size() != 0 && s.top() != 0)
        {
            if (s.top() == -1)
            {
                if(flag_yes==false){
                    res = res + '0';
                    s.pop();
                    continue;
                }
            }
            char temp = '0' + s.top();
            s.pop();
            res += temp;
        }
        while (s.size() != 0)
        {
            res += '0';
            s.pop();
        }
        cout << res << endl;
    }
    return 0;
}