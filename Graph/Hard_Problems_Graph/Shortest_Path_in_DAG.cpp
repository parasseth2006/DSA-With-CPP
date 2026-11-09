#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void toposort(int node, vector<vector<pair<int,int>>> &adj, 
    vector<int>&vis, stack<int>&st){
        vis[node] = 1;
        for(auto it: adj[node]){
            int v = it.first;
            if(!vis[v]){
                toposort(v, adj, vis, st);
            }
        }
        st.push(node);
    }
    vector<int> shortestPath(int V, vector<vector<int>>& edges) {
        vector<vector<pair<int,int>>>adj(V);
        //1. Create adjacency list
        for(auto it: edges){
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            adj[u].push_back({v,wt});
        }
        //2. Topo Sort algo
        vector<int>vis(V);
        stack<int>st;
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                toposort(i, adj, vis, st);
            }
        }
        //3. Intialise Distance array
        vector<int>dis(V, INT_MAX);
        dis[0] = 0;
        //4. Relax edges in topo sort
        while(!st.empty()){
            int node = st.top();
            st.pop();
            if(dis[node] != INT_MAX){
                for(auto it : adj[node]) {
                    int v = it.first;
                    int wt = it.second;
                    if(dis[node] + wt < dis[v]) {
                        dis[v] = dis[node] + wt;
                    }
                }
            }
        }
        //5. Replace unreachable nodes with -1
        for(int i = 0; i < V; i++){
            if(dis[i] == INT_MAX){
                dis[i] = -1;
            }
        }
        return dis;
    }
};
int main(){
    return 0;
}