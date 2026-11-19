class Solution {
	public:
	bool dfs(int node, int col, vector<int> &colour, vector<vector<int>> &adj) {
		colour[node] = col;
		for (auto it: adj[node]) {
			if (colour[it] == -1) {
				if (dfs(it, !col, colour, adj) == false)
					return false;
			}
			else if (colour[it] == col) {
				return false;
			}
			
		}
		return true;
	}
	bool isBipartite(vector<vector<int>> &adj) {
		int n = adj.size();
		vector<int>colour(n, -1);
		for (int i = 0; i < n; i++) {
			if (colour[i] == -1) {
				if (dfs(i, 0, colour, adj) == false)
					return false;
			}
		}
		return true;
	}
};
