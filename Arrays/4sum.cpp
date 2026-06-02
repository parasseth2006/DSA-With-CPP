//Bruteforce approach 4loops(O(N^4))
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>>st;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                for(int l= k+1; l<n; l++){
                    if (nums[i]+nums[j]+nums[k]+nums[l]==target){
                         vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                        st.push_back(temp);
                    }
                }
            }
        }
    } 
    return st;     
}
int main(){
    vector<int>nums = {1,0,-1,0,-2,2};
    vector<vector<int>>ans = fourSum(nums,0);
    for(auto vec : ans) {
        for(auto x : vec) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}