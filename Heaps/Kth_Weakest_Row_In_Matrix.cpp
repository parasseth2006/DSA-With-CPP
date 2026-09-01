vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int n = mat.size();
    int m = mat[0].size();
    //Max heap to store no of soldier and their row index
    priority_queue<pair<int,int>>pq;
    for(int i = 0; i < k; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(mat[i][j] == 1){
                cnt+=1;
            }
        }
        pq.push({cnt, i});
    }
    for(int i = k; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(mat[i][j] == 1){
                cnt += 1;
            }
        }
        if(pq.top().first > cnt || pq.top().first == cnt && pq.top().second > i){
            pq.pop();
            pq.push({cnt, i});
        }

    }
    vector<int>res;
    while(!pq.empty()){
        res.push_back(pq.top().second);
        pq.pop();
    }
    reverse(res.begin(), res.end());
    return res;