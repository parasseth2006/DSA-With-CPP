class Solution {
  public:
    vector<int> dijkstra(vector<vector<vector<int>>> &adj, int src) {
        int n = adj.size();
       priority_queue<pair<int,int>,
                      vector<pair<int,int>>,
                      greater<pair<int,int>>> pq;
        vector<int>dist(n,1e9);
        dist[src] = 0;
        pq.push({0, src});
        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if(dis != dist[node]) continue;
            for(auto it: adj[node]){
                int edgeWeight = it[1];
                int adjNode = it[0];
                if(dis + edgeWeight < dist[adjNode]){
                    dist[adjNode] = dis + edgeWeight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
            
        }
        return dist;
        
    }
};