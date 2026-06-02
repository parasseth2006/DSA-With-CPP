//Implementing upper bound
#include<iostream>
#include <vector>
using namespace std;
int lower_bound(vector<int>arr, int target ){
    int n = arr.size();
    int low = 0, high = n-1;
    int ans = n;
    while ( low <= high){
        int mid = (low + high)/2;
        //May be an ans
        
        if(arr[mid] > target){
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    
    cout<< lower_bound({1,2,3,3,7,8,9,9,9,11},1);
    return 0;
}
