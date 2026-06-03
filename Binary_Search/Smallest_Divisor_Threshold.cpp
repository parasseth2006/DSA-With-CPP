#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int calculate(vector<int>& nums, int divisor){
    int sum = 0;
    int n = nums.size();
    for(int j = 0; j< n; j++){
        int ans = ceil(double(nums[j])/(double)divisor);
        sum+= ans;
    }
    return sum;
    
}
int smallestDivisor(vector<int>& nums, int threshold) {
    int n = nums.size();
    int maxi = *max_element(nums.begin(), nums.end());  
    int low = 1, high = maxi;
    while( low <= high){
        int mid = (low+high)/2;
        int answer = calculate(nums,mid);
         if(answer <= threshold){
                
            high = mid - 1;
        }
        else{
            low = mid +1;
        }

    }   
    return low;
}
int main(){
    vector<int> nums = {1,2,5,9};
    int result = smallestDivisor(nums,6);
    cout << result;
    return 0;
}
