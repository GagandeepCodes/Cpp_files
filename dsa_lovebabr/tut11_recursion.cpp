#include <bits/stdc++.h>
using namespace std;
int factorial( int n)
{
    //base case
    if(n == 0)
    {
        return 1;
    }
    int ans = n * factorial(n-1);

    return ans;
}
int power(int n)
{
    if ( n == 0)
    {
         return 1;
    }
    int ans  = 2 * power ( n - 1);

    return ans;
}
void counting(int n)
{
    cout << "before" << n << endl;
    if ( n == 0)
    {
        return ;
    }
    counting(n-1);
    cout << "after" << n << endl;
}
int main()
{
    int n; cin >>n;
    cout << "factorial of " << n << " is : " << factorial(n) << endl;
    cout << "2 power " << n << " is : " << power(n) << endl;
    counting(n); cout << endl;
    return 0;
} 