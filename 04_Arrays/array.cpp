#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> nums={1,0,3,4,0,7,8,0,9};
    int j=0;
    int n= nums.size();
    for(int i=1;i<n;i++){
        if (nums[j]==0){
            swap(nums[j],nums[i]);
            j++;
        }
    }
    for(auto i: nums){
        cout<<i<<" ";
    }
}