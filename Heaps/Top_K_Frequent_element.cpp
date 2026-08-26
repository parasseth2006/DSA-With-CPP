class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        unordered_map<int,int>freq;
        vector<int>res;
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }
        for(auto it: freq){
            int element = it.first;
            int fr = it.second;
            pair<int,int>curr = {fr, element};
            if(pq.size()<k) {
                pq.push(curr);
                continue;
            }
            if(curr.first < pq.top().first) continue;
            pq.pop();
            pq.push(curr);
        }
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};