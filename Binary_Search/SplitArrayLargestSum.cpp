#include <bits/stdc++.h>
using namespace std;
int countPartition(vector<int>& nums, int maxSum){
    int n = nums.size();
    int partition = 1;
    long long subarraySum = 0; 
    for(int i = 0; i < n; i++){
        if(subarraySum + nums[i]> maxSum){
            subarraySum = nums[i];
            partition++;
        }
        else{
            subarraySum += nums[i];
        }
    } 
    return partition;
}
int splitArray(vector<int>& nums, int k) {
    
    int low = *max_element(nums.begin(),nums.end());
    int high = accumulate(nums.begin(), nums.end(),0); 
    
    while( low <= high){
        int mid = (low + high)/2;
        if(countPartition(nums, mid)>k){
            
            low = mid  + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;    
}