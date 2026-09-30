#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i = 1; i < n; i = i + 3){
        if(nums[i] != nums[i-1]){
            return nums[i-1];
        }
    }
    return nums[n-1];
}
int main(){
    vector<int>nums = {4,4,4,2,1,2,2};
    cout << singleNumber(nums);
}