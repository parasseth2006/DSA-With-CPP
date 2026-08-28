vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    int  n = points.size();
    priority_queue<pair<int, vector<int>>> pq;
    for(auto it: points){
        int d = (it[0]*it[0] + it[1]*it[1]);
        pq.push({d,it});
        if(pq.size()>k){
            pq.pop();
        }
    }
    vector<vector<int>>res;
    while(!pq.empty()){
        res.push_back(pq.top().second);
        pq.pop();
    }
    return res;
}