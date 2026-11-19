#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int> arr, int target){
    int start = 0, end = arr.size()-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(target > arr[mid]){
            start = mid+1;
        } 
        else if (target < arr[mid]){
            end = mid -1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,6,8,11,12,23,34,35};
    int target = 12;
    cout<<binary_search( arr,target);
}