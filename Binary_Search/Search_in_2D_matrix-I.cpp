// In this problem all the elements of matrix are sorted row wise along with columns
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target) {  
    int m = mat.size();
    int n = mat[0].size();
    int low = 0, high = (n*m) - 1;
    while(low <= high){
        int mid = (low+high)/2;
        int row = mid/n;
        int col = mid%n;
        if(mat[row][col] == target) return true;
        else if(mat[row][col]<target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false; 
}
int main(){
    vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<< searchMatrix(mat, 3);
    return 0;
}