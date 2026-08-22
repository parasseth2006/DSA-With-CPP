#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    int n = nums.size();
    priority_queue<int,vector<int>,greater<int>>pq; //Min heap
    for(int i = 0; i < k; i++){ 
        //Push first k elements into heap
        pq.push(nums[i]);
    }
    //Now push remain n-k elements 
    for(int i = k; i < n; i++){
        if(nums[i]<= pq.top()){
            continue;
        }
        pq.pop();
        pq.push(nums[i]);
    }
    return pq.top();
}
int main(){
    vector<int>nums = {34,32,56,78,90,12,5,7};
    int ans = findKthLargest(nums,4);
    cout << ans;
}