class Solution {
 public:
    bool dfs(int node, vector<vector<int>>& adj, vector<int> &vis, vector<int>& pathvis){
        vis[node] = 1;
        pathvis[node] = 1;
        //Traverse for adjacent node
        for(auto it: adj[node]){
            //when the node is not visited
            if(!vis[it]){
                if(dfs(it,adj,vis,pathvis) == true){
                    return true;
                }
            }
            //If the node was previously visited but has been visited on the same path again 
            //then its a cycle and return true
            else if(pathvis[it]){
                return true;
            }
        }
        pathvis[node] = 0;
        return false;
    }
    bool isCyclic(vector<vector<int>>& adj){
        int n = adj.size();
        vector<int>vis(n,0);
        vector<int>pathvis(n,0);
        for(int i = 0; i < n; i++){
            if(dfs(i,adj,vis,pathvis) == true){
                return true;
            }
        }
        return false;
    }
};