#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        ans = ans ^ nums[i];
    }    
    return ans;   
}

int main(){
    vector<int>nums = {4,1,2,1,2};
    cout << singleNumber(nums);
}