struct cmp {
    bool operator()(const pair<int,string>& a,
                    const pair<int,string>& b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size();
        //Create a pair min heap to store freq and word:
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp >pq;
        //Create a map to store ele and freq:
        unordered_map<string,int>mpp;
        //To store words in ans vector
        vector<string>ans;
        for(auto it: words){
            mpp[it]++;
        }
        for(auto it: mpp){
            string ele = it.first;
            int freq = it.second;
            pair<int, string> curr = {freq, ele};
            if(pq.size() < k){
                pq.push(curr);
                continue;
            }
            if(curr.first < pq.top().first || curr.first == pq.top().first && curr.second > pq.top().second) continue;
            pq.pop();
            pq.push(curr);
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};