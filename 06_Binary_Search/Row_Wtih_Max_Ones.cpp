#include <bits/stdc++.h>
using namespace std;
vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int m = mat.size(); // no. of rows
    int n = mat[0].size(); // no. of col
    int maxCount = -1;
    int index = -1;
    for(int i = 0; i < m; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 1){
                cnt++;
            }
        }
        if (cnt > maxCount){
            maxCount = cnt;
            index = i;
        }
    }
    return {index, maxCount}; 
}