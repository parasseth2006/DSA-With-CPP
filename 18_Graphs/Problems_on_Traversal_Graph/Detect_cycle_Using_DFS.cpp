class Solution {
  public:
    bool dfs(int node, int parent, vector<int> &vis, vector<vector<int>>& adj){
        vis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it]){
                if(dfs(it, node, vis, adj)) return true;
            }
            else if(it != parent){
                return true;
            }
        }
        return false;
        
    }
    bool isCycle(vector<vector<int>>& adj){
        int n = adj.size();
        vector<int>vis(n,0);
        for(int i = 0; i < n; i++) {
            if(!vis[i])
                if(dfs(i,-1,vis,adj)) return true;
        }
        return false;
    }
};