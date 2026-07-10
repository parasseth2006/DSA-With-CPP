#include <bits/stdc++.h>
using namespace std;
void fun(int sum, int last, int k, vector<int> &nums, vector<vector<int>> &ans){
    //if sum is 0 and number of element is k
    if( sum == 0 && nums.size() == k){
        ans.push_back(nums);
        return;
    }
    // if sum < 0 and size of nums is > k
    if(sum < 0 || nums.size()>k){
        return;
    }
    for(int i = last; i <= 9; i++){
        if(i <= sum){
            nums.push_back(i);
            fun(sum - i, i+1 , k, nums, ans);
            nums.pop_back();
        }
        else {
            break;
        }
    }
}
vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> nums;
    vector<vector<int>> ans;
    fun(n, 1, k, nums, ans);
    return ans;
}