#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> check(vector<int> arr){
    unordered_map<int,int>mpp;
    int n = arr.size();
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;

    }
    int missing = -1, repeating = -1;
    for(auto it:mpp){
        if(it.second == 0){
            missing = it.first;
        }
        else if(it.second == 2){
            repeating = it.first;
        }
    }
    return {missing, repeating};

}
int main(){
    vector<int>num = {1,2,3,4,4,6};
    vector<int>d = check(num);
    
}