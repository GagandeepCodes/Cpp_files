#include <bits/stdc++.h>
using namespace std;
long long minCost(long long arr[], long long n)
{
    // Your code here
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    long long cost = 0;
    // int size = pq.size();
    while (pq.size() > 1)
    {
        long long mini = pq.top();
        pq.pop();
        long long sec_min = pq.top();
        pq.pop();
        long long x = mini + sec_min;
        pq.push(x);
        cost += x;
        // cout<<"cost till now : "<<cost<<endl;
    }
    return cost;
}
int main()
{

    return 0;
}