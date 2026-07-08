#include <bits/stdc++.h>
using namespace std;
bool sorted(vector<int>&arr,int i, int n){
    if(i == n || i == n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    
    return sorted(arr, i+1, n);
}
 int main(){
    vector<int>arr = {1,5,7,8};
    int n = arr.size();
    cout<< sorted(arr,0,n);
 }