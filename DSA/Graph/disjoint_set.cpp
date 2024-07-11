#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
public:
    vector<int> rank, parent, size;
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findP(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findP(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int pu = findP(u);
        int pv = findP(v);
        if (pu == pv)
            return;
        if (rank[pu] < rank[pv])
        {
            parent[pu] = pv;
        }
        else if (rank[pu] > rank[pv])
        {
            parent[pv] = pu;
        }
        else
        {
            parent[pv] = pu;
            rank[pu]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int pu = findP(u);
        int pv = findP(v);

        if (pu == pv)
            return;

        if (size[pu] < size[pv])
        {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else
        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};
int main()
{
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);

    // union of 3 and 7 is not done
    // Expected Output - Not Same
    if (ds.findP(3) == ds.findP(7))
    {
        cout << "Same\n";
    }
    else
        cout << "Not same\n";

    // Union Done
    ds.unionByRank(3, 7);

    // Expected Output - Same
    if (ds.findP(3) == ds.findP(7))
    {
        cout << "Same\n";
    }
    else
        cout << "Not same\n";
    return 0;
}