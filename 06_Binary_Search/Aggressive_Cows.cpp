//Aggressive Cows problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//To check if we can place all cows
bool canWePlace(vector<int>&arr, int dist, int cows){
    int cntcows = 1, last = arr[0];
    int n = arr.size();
    for(int i = 1; i < n; i++){
        if(arr[i] - last >= dist){
            cntcows++;
            last = arr[i];
        }
        
    }
    if(cntcows >= cows) return true;
    else return false;
}
//Binary search function 
int aggressiveCows(vector<int>& arr, int cows){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int low = 1;
    int high = arr[n-1]-arr[0];
    while(low <= high){
        int mid = (low+high)/2;
        if(canWePlace(arr, mid, cows) == true){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return high;
}
//Main function
int main(){
    vector<int>arr = {0,3,4,7,10,9};
    int cows = 4;
    int distance = aggressiveCows(arr,cows);
    cout<< "Minimum distance between two cows: "<< distance;
    return 0;
}