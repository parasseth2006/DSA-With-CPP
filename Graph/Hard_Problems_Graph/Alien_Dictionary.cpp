class Solution{
    
public:
vector<int> topoSort(vector<vector<int>>& adj, vector<int>& present) {

    int n = 26;
    vector<int> indegree(n, 0);

    for(int i = 0; i < n; i++) {
        for(auto it : adj[i]) {
            indegree[it]++;
        }
    }

    queue<int> q;

    for(int i = 0; i < n; i++) {
        if(present[i] && indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> topo;

    while(!q.empty()) {

        int node = q.front();
        q.pop();

        topo.push_back(node);

        for(auto it : adj[node]) {
            indegree[it]--;

            if(indegree[it] == 0) {
                q.push(it);
            }
        }
    }

    return topo;
}

string findOrder(vector<string>& words) {

    int n = words.size();

    vector<vector<int>> adj(26);
    vector<int> present(26, 0);

    // Mark characters that actually exist
    for(auto word : words) {
        for(auto ch : word) {
            present[ch - 'a'] = 1;
        }
    }

    // Build graph
    for(int i = 0; i < n-1; i++) {

        string s1 = words[i];
        string s2 = words[i+1];

        int len = min(s1.size(), s2.size());

        bool found = false;

        for(int ptr = 0; ptr < len; ptr++) {

            if(s1[ptr] != s2[ptr]) {

                adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');

                found = true;
                break;
            }
        }

        // Invalid prefix
        if(!found && s1.size() > s2.size()) {
            return "";
        }
    }

    vector<int> topo = topoSort(adj, present);

    int count = 0;

    for(int i = 0; i < 26; i++) {
        if(present[i]) count++;
    }

    // Cycle detection
    if(topo.size() != count) {
        return "";
    }

    string ans;

    for(auto it : topo) {
        ans += char(it + 'a');
    }

    return ans;
}
};