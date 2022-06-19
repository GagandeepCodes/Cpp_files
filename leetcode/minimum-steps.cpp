#include <bits/stdc++.h>
using namespace std;
int numberOfSteps(int num)
{

    int count = 0;

    while (num)
    {

        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = num - 1;
        }
        count = count + 1;
    }

    return count;
}
int main()
{
    return 0;
}