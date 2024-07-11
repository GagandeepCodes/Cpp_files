#include <bits/stdc++.h>
using namespace std;
void addEdge(int u,int v,vector<int> adj[]){
    adj[u].push_back(v);
}

void bfs(int src,vector<int> adj[], vector<int> &vis){
    vis[src] = 1;
    queue<int> q;
    q.push(src);

    while(!q.empty()){
        int node = q.front();
        cout<<node<<" ";
        q.pop();

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}
int main(){
    int n = 10;
    vector<int> adj[n];
    addEdge(0,1,adj);
    addEdge(0,2,adj);
    addEdge(0,4,adj);
    addEdge(0,8,adj);
    addEdge(1,5,adj);
    addEdge(1,6,adj);
    addEdge(1,9,adj);
    addEdge(2,4,adj);
    addEdge(3,7,adj);
    addEdge(3,8,adj);
    addEdge(5,8,adj);
    addEdge(6,7,adj);
    addEdge(6,9,adj);

    vector<int> vis(n,0);
    for(int i=0;i<10;i++){
        if(!vis[i]){
            bfs(i,adj,vis);
        }
    }
    return 0;
}

// 10 13
// 0 1
// 0 2
// 0 4
// 0 8
// 1 5
// 1 6
// 1 9
// 2 4
// 3 7
// 3 8
// 5 8
// 6 7
// 6 9
