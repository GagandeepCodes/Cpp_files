#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
public:
    vector<int> parent, size;
    DisjointSet(int n)
    {
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

    int getsize(int x){
        return size[x];
    }
};
int main(){
    int n,q;cin>>n>>q;
    vector<string> query(q,"");
    vector<int> s1(q,0),s2(q,0);
    for(int i=0;i<q;i++){
        cin>>query[i];
    }
    for(int i=0;i<q;i++){
        cin>>s1[i];
    }
    for(int i=0;i<q;i++){
        cin>>s2[i];
    }
    DisjointSet ds(n);
    vector<int> ans;
    for(int i=0;i<q;i++){
        if(query[i]=="friend"){
            ds.unionBySize(s1[i],s2[i]);
        }
        else if(query[i]=="total"){
            int size1 = ds.getsize(ds.findP(s1[i]));
            int size2 = ds.getsize(ds.findP(s2[i]));
            int x = size1+size2;
            ans.push_back(x);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    return 0;
}