// Leader in an array with an optimal approach
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int>Leader(vector<int>&arr){
    vector <int> ans;
    int n= arr.size();
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--){
        if (arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi = max(maxi,arr[i]);
        }
    }
    return ans;
}
int main(){
    vector<int>arr={10,22,12,3,0,6};
    vector<int> result = Leader(arr);  

    for(int x : result){               
        cout << x << " ";
    }
}