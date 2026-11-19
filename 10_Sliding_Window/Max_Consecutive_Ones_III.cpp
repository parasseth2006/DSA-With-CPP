#include <bits/stdc++.h>
using namespace std;
int longestOnes(vector<int>& nums, int k) {
    int n = nums.size();
    int maxLen = 0;
    int l = 0, r = 0, zeroes = 0;
    while(r < n){
        if(nums[r] == 0) zeroes++;
        if(zeroes > k){
            if(nums[l] == 0){
                zeroes--;
            }
            l++;
            
        }
        if(zeroes <= k){
            int len = r - l + 1;
            maxLen = max(maxLen, len);
        }
        r++;
    }
    return maxLen;
}
int main(){
    vector<int>nums = {1,1,1,1,0,0,0,0,1,1,1,1};
    cout<< longestOnes(nums, 2);
    return 0;
}