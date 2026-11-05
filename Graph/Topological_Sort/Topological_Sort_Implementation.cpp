#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int>& vis, stack<int>& st, vector<vector<int>>& adj){
    vis[node] = 1;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, vis, st, adj);
        }
    }
    st.push(node);
}
vector<int> topoSort(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int>vis(n,0);
    stack<int>st;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i, vis, st, adj);
        }
    }
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
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
