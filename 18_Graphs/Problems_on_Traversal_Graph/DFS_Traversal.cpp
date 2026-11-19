#include <bits/stdc++.h>
using namespace std;
void func(int node, vector<vector<int>>& adj, int vis[], vector<int>&ls){
    vis[node] = 1;
    ls.push_back(node);
    for(auto it: adj[node]){
        if(!vis[it]){
            func(it,adj,vis,ls);
        }
    }
}
vector<int> dfs(vector<vector<int>>& adj) {
    int n = adj.size();
    int vis[n] = {0};
    int start = 0;
    vector<int>ls;
    func(start, adj, vis, ls);
    return ls;
    
}
int main() {
    int n, m;
    cin >> n >> m;

    // Create adjacency list (0-based nodes)
    vector<vector<int>> adj(n);

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Print adjacency list
    cout << "Adjacency List:\n";

    for (int i = 0; i < n; i++) {
        cout << i << " -> ";

        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }

        cout << "\n";
    }

    // Perform DFS
    vector<int> result = dfs(adj);

    // Print DFS traversal
    cout << "DFS Traversal: ";

    for (int node : result) {
        cout << node << " ";
    }

    cout << "\n";

    return 0;
}
