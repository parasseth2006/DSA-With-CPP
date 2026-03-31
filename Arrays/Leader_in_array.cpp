#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr={10,22,12,3,0,6};
    int n= arr.size();
    vector<int>nums;
    for ( int i = 0; i<n; i++){
        bool leader = true;
        for(int j=i+1; j<n; j++){
            if (arr[j]>arr[i]){
                leader = false;
                break;
            }

        }
        if(leader == true)
        nums.push_back(arr[i]);
    }
    for(int i = 0 ; i<nums.size(); i++){
        cout<< nums[i]<< endl;
    }
    return 0;
} 