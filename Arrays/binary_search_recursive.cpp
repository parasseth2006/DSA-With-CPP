#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int> arr, int target, int start,int end){
    
    if(start <= end){
        int mid = (start+end)/2;
        if(target > arr[mid]){
            return binary_search(arr,target,mid +1, end);
        } 
        else if (target < arr[mid]){
            return binary_search(arr,target,start,mid-1);
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
    int start = 0;
    int end = arr.size();
    cout<<binary_search( arr,target,start,end);
}