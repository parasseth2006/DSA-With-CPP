
#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>>& adj) {
    int n = adj.size();

    vector<int> visited(n, 0);
    queue<int> q;
    vector<int> result;

    visited[0] = 1;
    q.push(0);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        result.push_back(node);

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }

    return result;
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

    // Perform BFS
    vector<int> result = bfs(adj);

    // Print BFS traversal
    cout << "BFS Traversal: ";

    for (int node : result) {
        cout << node << " ";
    }

    cout << "\n";

    return 0;
}
