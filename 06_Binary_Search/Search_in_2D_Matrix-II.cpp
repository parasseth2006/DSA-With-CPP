//elements are sorted only column wise after every new row order startes again
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size(); //rows
    int n = mat[0].size(); //cols
    int row = 0;
    int col = n-1;
    while(row < m && col >= 0){
        if(mat[row][col] == target){
            return true;
        }
        else if( mat[row][col] < target){
            row ++;
        }
        else {
            col --;
        }
    }
    return false;
}
    int main(){
    vector<vector<int>> mat = {{1,4,7,11,15},{2,5,8,12,19},
    {3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout << searchMatrix(mat,14);
    return 0;
} 