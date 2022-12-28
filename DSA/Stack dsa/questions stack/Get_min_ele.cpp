#include <bits/stdc++.h>
using namespace std;
// you have to get minimum element from the stack
// in O(1) time and O(1) space
class Solution
{
    int minEle = INT_MAX;
    stack<int> s;

public:
    /*returns min element from stack*/
    int getMin()
    {

        // Write your code here
        if (s.empty())
        {
            return -1;
        }
        else
        {
            return minEle;
        }
    }

    /*returns poped element from stack*/
    int pop()
    {
        // Write your code here
        if (s.empty())
        {
            return -1;
        }
        int curr = s.top();
        s.pop();
        if (curr > minEle)
        {
            return curr;
        }
        else
        {
            int prevMin = minEle;
            int val = 2 * minEle - curr;
            minEle = val;
            return prevMin;
        }
    }

    /*push element x into the stack*/
    void push(int x)
    {
        // for first element
        if (s.empty())
        {
            s.push(x);
            minEle = x;
        }
        else
        {
            if (x < minEle)
            {
                s.push(2 * x - minEle);
                minEle = x;
            }
            else
            {
                s.push(x);
            }
        }
        // Write your code here
    }
};
int main()
{

    return 0;
}