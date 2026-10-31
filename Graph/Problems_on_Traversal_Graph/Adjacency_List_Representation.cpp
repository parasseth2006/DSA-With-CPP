#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m; //n = nodes, m = edges
    cin >> n >> m;
    vector<vector<int>>adj(n+1);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << "\nAdjacency List:\n";
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }
        cout << "\n";
    }
    return 0;
}