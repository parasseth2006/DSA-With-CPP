#include <bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n = arr.size();
    priority_queue<pair<int,int>> pq;
    for(int i = 0; i < k; i++){
        int d = abs(arr[i] - x);
        pq.push({d, arr[i]});
    }
    for(int i = k; i < n; i++){
        int d = abs(x - arr[i]);
        if(d < pq.top().first){
        pq.pop();
        pq.push({d, arr[i]});
        }
    }
    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(), ans.end());
    return ans;
}
