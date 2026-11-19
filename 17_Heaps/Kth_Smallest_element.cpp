#include <bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int> &arr, int k) {
    int n = arr.size();
    priority_queue<int>pq; //max heap to store k smallest element
    for(int i = 0; i < k; i++){
        pq.push(arr[i]);
    }
    //now we push remain n-k elements of array in heap such that only top k smallest element exist in heap
    for(int i = k; i < n; i++){
        if(arr[i] >= pq.top()) continue;
        pq.pop();
        pq.push(arr[i]);
    }
    return pq.top();
}
int main(){
    vector<int>arr = {34,32,56,78,90,12,5,7};
    int ans = kthSmallest(arr,4);
    cout << ans;
}