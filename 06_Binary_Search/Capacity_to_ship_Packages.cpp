#include <iostream>
#include <vector>
#include <algorithm>    
using namespace std;
int countDays(vector<int>& weights, int capacity) {
    int n = weights.size();
    int load = 0;
    int days = 1;
    for(int i = 0; i < n; i++){
        if (load + weights[i]> capacity)  {
            load = weights[i];
            days++;
        }
        else{
            load+= weights[i];
        }
    }
    return days;   
}
int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size(), max = *max_element(weights.begin(), weights.end()), sum = 0;
    for(int i = 0; i < n; i++){
        sum += weights[i];
    }
    int low = max, high = sum;

    while(low <= high){
    int mid = (low + high)/2;
    if(countDays(weights, mid) > days){
        low = mid + 1;
    }
    else {
        high = mid - 1;
    }
    }
    return low;
}
int main(){
    vector<int> weights = {5,4,5,2,3,4,5,6};
    int days = 5;
    int d = shipWithinDays(weights, days);
    cout<< "minimum weight capacity "<< d;
    return 0;
}
